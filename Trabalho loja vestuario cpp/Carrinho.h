#include "listaVendas.h"

namespace core {
	class Carrinho : public ListaProdutos {

	public:
		int calcularValorTotal() {
			No <produto>* aux = this->getNo(0);
			int count = 0;
			while (aux != nullptr) {
				count += aux->info.preco * aux->info.estoque;
				aux = aux->eloF;
			}
			return count;
		}

		int calcularDesconto() {
			float desconto = 0;
			int valorTotal = this->calcularValorTotal();
			int quantidadeProdutos = this->calcularEstoque();
			if (valorTotal >= 100) {
				desconto = 10;
			}
			else if (valorTotal >= 50) {
				desconto = 5;
			}
			if (quantidadeProdutos >= 10) {
				desconto += 30;
			}
			else if (quantidadeProdutos >= 3) {
				desconto += 10;
			}
			return desconto;
		}

		float calcularValorComDesconto() {
			int valorTotal = this->calcularValorTotal();
			int desconto = this->calcularDesconto();
			float valorComDesconto = (float)valorTotal * (1 - (float)desconto / 100);
			std::cout << valorComDesconto <<" " << desconto << "\n";
			return valorComDesconto;
		}
		Venda criarVenda() {
			Venda novaVenda;
			novaVenda.horario = time(NULL);
			novaVenda.valor = this->calcularValorTotal();
			novaVenda.valorCobrado = this->calcularValorComDesconto();
			novaVenda.quantProdutos = this->calcularEstoque();
		}
	};
}