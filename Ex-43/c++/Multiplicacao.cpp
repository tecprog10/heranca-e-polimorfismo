#include "Multiplicacao.h"

Multiplicacao::Multiplicacao(Expressao* esq, Expressao* dir) : Operador(esq, dir) {}

double Multiplicacao::calcular() const
{
  return m_esquerda->calcular() * m_direita->calcular();
}

Expressao* Multiplicacao::clone() const
{
  return new Multiplicacao(m_esquerda->clone(), m_direita->clone());
}

char Multiplicacao::getOperadorSimbolo() const
{
  return '*';
}