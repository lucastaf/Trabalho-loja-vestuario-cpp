#include "lde.cpp"
#include "windows.h"
#include <ctime>
#include <stdio.h>
#include <string>
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
};