#include "TrianguloEq.h"

TrianguloEq::TrianguloEq(const double tam_lados, const std::string& cor) :
  PolReg(3, tam_lados, cor)
{}

TrianguloEq::~TrianguloEq()
= default;

double TrianguloEq::calculaArea()
{
  // Área = 3^(1/2)*l^2/4
  return sqrt(3) * pow(m_tam_lados, 2) / 4;
}