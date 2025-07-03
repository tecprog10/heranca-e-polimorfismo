#include "Caminhao.h"

Caminhao::Caminhao(const double valor_locacao, const double imposto, const int eixos) :
	Veiculo(valor_locacao, imposto), eixos(eixos)
{}

Caminhao::~Caminhao()
{}

double Caminhao::valorDiaria() const
{
	return (valor_locacao + imposto) * (1 + eixos * 0.10);
}
