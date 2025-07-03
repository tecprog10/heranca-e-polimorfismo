#include "Quadrado.h"

Quadrado::Quadrado(const double tam_lados, const std::string& cor) :
	PolReg(4, tam_lados, cor)
{}

Quadrado::~Quadrado()
= default;

double Quadrado::calculaArea()
{
	// Área = l^2 = l * l 
	return m_tam_lados * m_tam_lados;
}