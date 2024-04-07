#pragma once
#include "carrinho.h"

namespace Global
{
	inline core::ListaProdutos produtos;
	inline core::Carrinho carrinho;
	inline core::ListaVendas vendas;

	public ref class confirmEvent {
	public:
		delegate void confirmarCompraEventHandler();
		static event confirmarCompraEventHandler^ confirmarCompraEvent;
		static void dispararEvento() {
			confirmarCompraEvent();
		}
	};

};