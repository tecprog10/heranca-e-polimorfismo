#include "Operando.h"
#include <string>

Operando::Operando(const double v) : m_valor(v) {}

double Operando::calcular() const
{
  return m_valor;
}

std::string Operando::toString() const
{
  return std::to_string(m_valor);
}

Expressao* Operando::clone() const
{
  return new Operando(m_valor);
}

double Operando::getValor() const
{
  return m_valor;
}

void Operando::setValor(const double v)
{
  m_valor = v;
}
