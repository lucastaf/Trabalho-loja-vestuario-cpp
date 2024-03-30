#include "listaVendas.cpp"

class Carrinho : public ListaProdutos{

public:
	int calcularValorTotal() {
		No <produto>* aux = this->getNo(0);
		int count = 0;
		while (aux != nullptr) {
			count += aux->info.preco;
			aux = aux->eloF;
		}
		return count;
	}
	float calcularValorComDesconto() {
		float desconto = 0;
		int valorTotal = this->calcularValorTotal();
		int quantidadeProdutos = this->calcularEstoque();
		if (valorTotal >= 100) {
			desconto = 10;
		}
		else if (valorTotal >= 50){
			desconto = 5;
		}
		if (quantidadeProdutos >= 10) {
			desconto += 30;
		}
		else if (quantidadeProdutos >= 3) {
			desconto += 10;
		}
		return valorTotal * (1 - (desconto / 100));;
	}
	Venda criarVenda() {
		Venda novaVenda;
		novaVenda.horario = time(NULL);
		novaVenda.valor = this->calcularValorTotal();
		novaVenda.valorCobrado = this->calcularValorComDesconto();
		novaVenda.quantProdutos = this->calcularEstoque();
	}
};