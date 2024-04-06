#include "lde.h"

namespace core {
	struct produto {
		std::string nome;
		int codigo;
		int preco;
		int estoque;
	};
}
namespace core {
	//Código : 0 sucesso, -1 nao encontrado, -2 nao permitido
	class ListaProdutos : public LDE<produto> {
		static void readWord(std::ifstream& arquivo, int& out)
		{
			std::string temp;
			arquivo >> temp;
			out = stoi(temp);
		}
	protected:
		int procurarIndexPorCodigo(int codigo) {
			for (int i = 0; i < this->getLength(); i++) {
				produto aux = this->getItem(i);
				if (aux.codigo == codigo) {
					return i;
				}
			}
			return -1;
		}

		int editarEstoque(int codigo, int novoValor) {
			int index = this->procurarIndexPorCodigo(codigo);
			if (index == -1) {
				return -1; //Codigo nao achado
			}
			if (novoValor < 0) {
				return -2; //Nao autorizado
			}
			produto NovoProduto = this->getItem(index);
			NovoProduto.estoque = novoValor;
			this->editItemById(index, NovoProduto);
			return 0;
		}
	public:
		//Get
		No<produto> *getComeco() {
			return this->getNo(0);
		}

		produto procurarItemPorCodigo(int codigo) {
			int index = this->procurarIndexPorCodigo(codigo);
			return this->getItem(index);
		}
		int calcularValorTotal() {
			int sum = 0;
			for (int i = 0; i < this->getLength(); i++) {
				produto produto = this->getItem(i);
				sum += produto.preco * produto.estoque;
			}
			return sum;
		}
		int calcularEstoque() {
			No <produto>* aux = this->getNo(0);
			int count = 0;
			while (aux != nullptr) {
				count += aux->info.estoque;
				aux = aux->eloF;
			}
			return count;
		}

		//Add
		void adicionarProduto(produto novoProduto) {
			No<produto>* aux = this->getNo(0);
			while (aux != nullptr) {
				if (aux->info.codigo == novoProduto.codigo) {
					this->reporEstoque(novoProduto.codigo, novoProduto.estoque);
					return;
				}
				aux = aux->eloF;
			}

			this->push(novoProduto);
		}

		//Edit
		int consumirEstoque(int codigo, int quantidade) {
			produto produto = this->procurarItemPorCodigo(codigo);
			return this->editarEstoque(codigo, produto.estoque - quantidade);
		}

		int reporEstoque(int codigo, int quantidade) {
			produto produto = this->procurarItemPorCodigo(codigo);
			return this->editarEstoque(codigo, produto.estoque + quantidade);
		}

		int consumirListaProdutos(ListaProdutos produtos) {
			ListaProdutos novaLista;
			novaLista.copy(*this);
			No<produto>* aux = produtos.getNo(0);
			while (aux != nullptr) {
				int consumo = novaLista.consumirEstoque(aux->info.codigo, aux->info.estoque);
				if (consumo != 0) {
					novaLista.deleteList();
					return consumo;
				}
				aux = aux->eloF;
			}
			this->copy(novaLista);
			return 0;
		}

		//Remove
		int removerItem(int codigo) {
			int index = this->procurarIndexPorCodigo(codigo);
			if (index == -1) {
				return index;
			}
			this->deleteItemById(index);
			return 0;
		}

		//Misc
		void print() {
			std::cout << '[';
			No<produto>* aux = this->getNo(0);
			while (aux != nullptr)
			{
				std::cout << aux->info.nome << " " << aux->info.estoque << ",";
				aux = aux->eloF;
			}
			std::cout << "] \n";
		}

		void writeFile() {
			No<produto>* aux = this->getNo(0);
			std::ofstream fileStream("Estoque.txt");
			fileStream << "ListaDeProdutosStorage";
			fileStream << this->getLength() << "\n";
			while (aux != nullptr) {
				produto novoProduto = aux->info;
				std::replace(novoProduto.nome.begin(), novoProduto.nome.end(), ' ', '-');
				fileStream << novoProduto.codigo << " " << novoProduto.nome << " " << novoProduto.preco << " " << novoProduto.estoque << "\n";
				aux = aux->eloF;
			}
			fileStream.close();
		}

		int readFile() {
			ListaProdutos NovaLista;
			std::ifstream fileReader("Estoque.txt");
			if (!fileReader) {
				fileReader.close();
				return -1;
			}
			std::string auxText;
			fileReader >> auxText;
			if (auxText != "ListaDeProdutosStorage") {
				fileReader.close();
				return -2;
			}
			int count;
			readWord(fileReader, count);

			for (int i = 0; i < count; i++) {
				produto novoProduto;
				readWord(fileReader, novoProduto.codigo);
				fileReader >> auxText;
				replace(auxText.begin(), auxText.end(), '-', ' ');
				novoProduto.nome = auxText;
				readWord(fileReader, novoProduto.preco);
				readWord(fileReader, novoProduto.estoque);

				NovaLista.adicionarProduto(novoProduto);
			}
			this->copy(NovaLista);
			NovaLista.deleteList();

			return 0;
		}

	};
}
