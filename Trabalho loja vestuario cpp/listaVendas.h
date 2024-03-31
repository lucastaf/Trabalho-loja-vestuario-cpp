#include "listaDeProdutos.h"

namespace core {

	namespace {
		std::string getDataString(time_t horario) {
			struct tm* time = std::localtime(&horario);
			return std::to_string(time->tm_mday) + "/" + (std::to_string(time->tm_mon + 1)) + "/" + std::to_string(time->tm_year + 1900);
		}
	}
struct Venda {
	time_t horario;
	int quantProdutos;
	int valor;
	float valorCobrado;
	std::string formaDePagamento;
	std::string vendedor;

	std::string formatarData() {
		std::string aux = getDataString(this->horario);

		return aux;
	}
};

class ListaVendas :public LDE<Venda> {
	static void readWord(std::ifstream& arquivo, int& out)
	{
		std::string temp;
		arquivo >> temp;
		out = stoi(temp);
	}

	static void readWordF(std::ifstream& arquivo, float& out)
	{
		std::string temp;
		arquivo >> temp;
		out = stof(temp);
	}

	static void readWordT(std::ifstream& arquivo, time_t& out)
	{
		std::string temp;
		arquivo >> temp;
		out = stol(temp);
	}

	static bool testarMesmoDia(time_t dia1, time_t dia2) {

		std::string dataString1 = getDataString(dia1);
		std::string dataString2 = getDataString(dia2);

		// Compare year, month, and day
		if (dataString1 == dataString2) {
			return true; // The two time_t values are in the same day
		}
		else {
			return false; // The two time_t values are not in the same day
		}
	}

public:

	No<Venda>* getComeco() {
		return this->getNo(0);
	}

	ListaVendas filtrarVendasDeHoje() {
		ListaVendas novaLista;
		time_t agora = std::time(NULL);
		No<Venda>* aux = this->getNo(0);
		for (; aux != nullptr; aux = aux->eloF) {
			if (this->testarMesmoDia(aux->info.horario, agora)) {
				novaLista.addVenda(aux->info);
			}
		}
		return novaLista;
	}

	int excluirVendaPorHorario(time_t horario) {
		No<Venda> *aux = this->getNo(0);
		int count = 0;
		for (; aux != nullptr;aux = aux->eloF) {
			if (aux->info.horario == horario) {
				this->deleteItemById(count);
				return 0;
			}
			count++;
		}
		return -1;
	}

	void addVenda(Venda novaVenda) {
		this->push(novaVenda);
	}

	int calcularValorTotal() {
		No <Venda>* aux = this->getNo(0);
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
		std::ofstream fileStream("Vendas.txt");
		fileStream << "ListaDeVendasStorage ";
		fileStream << this->getLength() << "\n";
		while (aux != nullptr) {
			Venda novaVenda = aux->info;
			std::replace(novaVenda.formaDePagamento.begin(), novaVenda.formaDePagamento.end(), ' ', '-');
			std::replace(novaVenda.vendedor.begin(), novaVenda.vendedor.end(), ' ', '-');
			fileStream << novaVenda.horario << " " << novaVenda.quantProdutos << " " << novaVenda.valor << " " << novaVenda.valorCobrado << " " << novaVenda.formaDePagamento << " " << novaVenda.vendedor << "\n";
			aux = aux->eloF;
		}
		fileStream.close();
	}

	int readFile() {
		ListaVendas NovaLista;
		std::ifstream fileReader("Vendas.txt");
		if (!fileReader) {
			fileReader.close();
			return -1;
		}
		std::string auxText;
		fileReader >> auxText;
		if (auxText != "ListaDeVendasStorage") {
			fileReader.close();
			return -2;
		}
		int count;

		readWord(fileReader, count);
		std::string vendedor;
		std::string formaPagamento;
		for (int i = 0; i < count; i++) {
			Venda novaVenda;
			readWordT(fileReader, novaVenda.horario);
			readWord(fileReader, novaVenda.quantProdutos);
			readWord(fileReader, novaVenda.valor);
			readWordF(fileReader, novaVenda.valorCobrado);
			fileReader >> formaPagamento;
			std::replace(formaPagamento.begin(), formaPagamento.end(), '-', ' ');
			novaVenda.formaDePagamento = formaPagamento;
			fileReader >> vendedor;
			std::replace(vendedor.begin(), vendedor.end(), '-', ' ');
			novaVenda.vendedor = vendedor;

			NovaLista.addVenda(novaVenda);
		}
		this->copy(NovaLista);
		NovaLista.deleteList();

		return 0;
	}

	void print() {
		std::cout << '[';
		No<Venda>* aux = this->getNo(0);
		while (aux != nullptr)
		{
			std::cout << aux->info.valor << " " << aux->info.formaDePagamento << " " << aux->info.vendedor << ",";
			aux = aux->eloF;
		}
		std::cout << "] \n";
	}
};
}