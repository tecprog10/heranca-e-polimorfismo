#include "Potencia.h"
#include <cmath>

Potencia::Potencia(Expressao* base, Expressao* expoente) : Operador(base, expoente) {}

double Potencia::calcular() const
{
  return std::pow(m_esquerda->calcular(), m_direita->calcular());
}

Expressao* Potencia::clone() const
{
  return new Potencia(m_esquerda->clone(), m_direita->clone());
}

char Potencia::getOperadorSimbolo() const
{
  return '^';
}