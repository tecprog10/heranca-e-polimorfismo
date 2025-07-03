#include "Subtracao.h"

Subtracao::Subtracao(Expressao* esq, Expressao* dir) : Operador(esq, dir) {}

double Subtracao::calcular() const
{
  return m_esquerda->calcular() - m_direita->calcular();
}

Expressao* Subtracao::clone() const
{
  return new Subtracao(m_esquerda->clone(), m_direita->clone());
}

char Subtracao::getOperadorSimbolo() const
{
  return '-';
}