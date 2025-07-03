#include "PolReg.h"

PolReg::PolReg(const int num_lados, const double tam_lados, std::string cor) :
  m_num_lados(num_lados), m_tam_lados(tam_lados), m_cor(std::move(cor))
{}

PolReg::~PolReg()
= default;

double PolReg::calculaPerimetro() const
{
  // Perímetro = n * l
  return m_num_lados * m_tam_lados;
}

int PolReg::calculaAnguloInterno() const
{
  // Ângulo Interno = (n - 2) * 180
  return (m_num_lados - 2) * 180;
}

bool PolReg::maiorQue(Classificavel* outro)
{
  // Converte para PolReg para acessar calculaArea()
  PolReg* outroPoligono = dynamic_cast<PolReg*>(outro);
  if(outroPoligono != nullptr)
  {
    return this->calculaArea() > outroPoligono->calculaArea();
  }
  return false;
}