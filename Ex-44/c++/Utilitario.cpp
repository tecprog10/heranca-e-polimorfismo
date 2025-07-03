#include "Utilitario.h"

Utilitario::Utilitario(const double valor_locacao, const double imposto, const double capacidade_carga) :
	Veiculo(valor_locacao, imposto), capacidade_carga(capacidade_carga)
{}

Utilitario::~Utilitario()
{}

double Utilitario::valorDiaria() const
{
	return (valor_locacao + imposto) + (capacidade_carga * 0.01);
}