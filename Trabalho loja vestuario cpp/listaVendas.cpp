#include "lde.cpp"
#include <ctime>
#include <sstream>
#include <iomanip>



struct Venda {
	time_t horario;
	int quantProdutos;
	int valor;
	float valorCobrado;
	string formaDePagamento;
	string vendedor;

	void printVendas() {
		cout << "Quantidade de produtos: " << quantProdutos << endl;
		cout << "Valor: " << valor << endl;
		cout << "Valor cobrado: " << valorCobrado << endl;
		cout << "Forma de pagamento: " << formaDePagamento << endl;
		cout << "Vendedor: " << vendedor << endl;
	}

	string formatarData() {
		tm* time = localtime(&this->horario);
		string aux = to_string(time->tm_mday) + "/" + (to_string(time->tm_mon + 1)) + "/" + to_string(time->tm_year + 1900);

		return aux;
	}
};


class ListaVendas:private LDE<Venda> {

public:
	void addVenda(Venda novaVenda) {
		this->push(novaVenda);
	}

	int calcularValorTotal() {
		No <Venda> *aux = this->getNo(0);
		int total = 0;
		while (aux != nullptr) {
			total += aux->info.valor;
			aux = aux->eloF;
		}
		return total;
	}

	int calcularValorCobradoTotal() {
		No <Venda>* aux = this->getNo(0);
		int total = 0;
		while (aux != nullptr) {
			total += aux->info.valorCobrado;
			aux = aux->eloF;
		}
		return total;
	}

	void writeFile() {
		No<Venda>* aux = this->getNo(0);
		ofstream fileStream("Vendas.txt");
		fileStream << "ListaDeVendasStorage";
		fileStream << this->getLength() << "\n";
		while (aux != nullptr) {
			Venda novaVenda = aux->info;
			replace(novaVenda.formaDePagamento.begin(), novaVenda.formaDePagamento.end(), ' ', '-');
			replace(novaVenda.vendedor.begin(), novaVenda.vendedor.end(), ' ', '-');
			fileStream << novaVenda.horario << " " << novaVenda.quantProdutos << " " << novaVenda.valor << " " << novaVenda.valorCobrado << " " << novaVenda.formaDePagamento<< " " << novaVenda.vendedor<<"\n";
			aux = aux->eloF;
		}
		fileStream.close();
	}

	int readFile() {
		ListaVendas NovaLista;
		ifstream fileReader("Vendas.txt");
		if (!fileReader) {
			fileReader.close();
			return -1;
		}
		string auxText;
		fileReader >> auxText;
		if (auxText != "ListaDeVendasStorage") {
			fileReader.close();
			return -2;
		}
		int count;
		
		readWord(fileReader, count);
		string vendedor;
		string formaPagamento;
		for (int i = 0; i < count; i++) {
			Venda novaVenda;
			readWord(fileReader, novaVenda.horario);
			readWord(fileReader, novaVenda.quantProdutos);
			readWord(fileReader, novaVenda.valor);
			readWord(fileReader, novaVenda.valorCobrado);
			fileReader >> formaPagamento;
			replace(formaPagamento.begin(), formaPagamento.end(), '-', ' ');
			novaVenda.formaDePagamento = formaPagamento;
			fileReader >> vendedor;
			replace(vendedor.begin(), vendedor.end(), '-', ' ');
			novaVenda.vendedor = vendedor;

			NovaLista.addVenda(novaVenda);
		}
		this->copy(NovaLista);
		NovaLista.deleteList();

		return 0;
	}
};

int main() {

	Venda venda1 = { time(NULL), 10, 150, 30, "pix", "joana" };
	Venda venda2 = { time(NULL), 15, 150, 40, "credito", "jailson" };
	Venda venda3 = { time(NULL), 13, 150, 60, "debito", "rubivaldo" };

	ListaVendas lista1;

	lista1.addVenda(venda1);
	lista1.addVenda(venda2);
	lista1.addVenda(venda3);

	lista1.writeFile();

	return 0;
}