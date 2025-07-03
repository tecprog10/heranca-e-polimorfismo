#include "Veiculo.h"

#include <iostream>
#include <ostream>

Veiculo::Veiculo(const double valor_locacao, const double imposto) :
	valor_locacao(valor_locacao), imposto(imposto)
{}

Veiculo::~Veiculo()
{}

void Veiculo::imprimir() const
{
	std::cout << "Valor da locacao: " << valor_locacao << std::endl;
	std::cout << "Imposto: " << imposto << std::endl;
	std::cout << "Valor da diaria: " << valorDiaria() << std::endl;
}
