#include "Divisao.h"
#include <stdexcept>

Divisao::Divisao(Expressao* esq, Expressao* dir) : Operador(esq, dir) {}

double Divisao::calcular() const
{
  const double divisor = m_direita->calcular();
  if(divisor == 0.0)
  {
    throw std::runtime_error("Divisao por zero nao eh permitida");
  }
  return m_esquerda->calcular() / divisor;
}

Expressao* Divisao::clone() const
{
  return new Divisao(m_esquerda->clone(), m_direita->clone());
}

char Divisao::getOperadorSimbolo() const
{
  return '/';
}