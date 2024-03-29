#include "lde.cpp"

struct produto {
	string nome;
	int codigo;
	int preco;
	int estoque;
};



//Código : 0 sucesso, -1 nao encontrado, -2 nao permitido
class ListaProdutos : private LDE<produto> {
private:
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
		if (novoValor < 0) {
			return -2; //Nao autorizado
		}
		int index = this->procurarIndexPorCodigo(codigo);
		if (index == -1) {
			return -1; //Codigo nao achado
		}
		produto NovoProduto = this->getItem(index);
		NovoProduto.estoque = novoValor;
		this->editItemById(index, NovoProduto);
		return 0;
	}

public:
	//Get
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
	int cosumirEstoque(int codigo, int quantidade) {
		produto produto = this->procurarItemPorCodigo(codigo);
		return this->editarEstoque(codigo, produto.estoque - quantidade);
	}
	int reporEstoque(int codigo, int quantidade) {
		produto produto = this->procurarItemPorCodigo(codigo);
		return this->editarEstoque(codigo, produto.estoque + quantidade);
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
		cout << '[';
		No<produto>* aux = this->getNo(0);
		while (aux != nullptr)
		{
			cout << aux->info.nome << " " << aux->info.estoque << ",";
			aux = aux->eloF;
		}
		cout << "] \n";
	}

};


int main() {
	produto produto1 = { "Calça azul", 2213, 20, 10 };
	produto produto2 = { "Blusa Vermelha", 2200, 20, 10 };
	produto produto3 = { "Sapato preto", 2103, 20, 10 };
	produto produto4 = { "Calça preta", 2003, 20, 10 };
	ListaProdutos lista1;
	lista1.adicionarProduto(produto1);
	lista1.adicionarProduto(produto2);
	lista1.adicionarProduto(produto2);
	lista1.adicionarProduto(produto4);


	lista1.cosumirEstoque(produto2.codigo, 2);

	lista1.print();


	system("pause");
	return 0;
}