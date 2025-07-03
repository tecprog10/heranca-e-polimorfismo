#include "Moto.h"

Moto::Moto(const double valor_locacao, const double imposto, const int cilindradas = 125) :
	Veiculo(valor_locacao, imposto), cilindradas(cilindradas)
{}

Moto::~Moto()
{}

double Moto::valorDiaria() const
{
	return (valor_locacao + imposto) + ((cilindradas / 125.0) * 5.0);
}

