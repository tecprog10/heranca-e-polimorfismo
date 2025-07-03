#include "Soma.h"

Soma::Soma(Expressao* esq, Expressao* dir) : Operador(esq, dir) {}

double Soma::calcular() const
{
  return m_esquerda->calcular() + m_direita->calcular();
}

Expressao* Soma::clone() const
{
  return new Soma(m_esquerda->clone(), m_direita->clone());
}

char Soma::getOperadorSimbolo() const
{
  return '+';
}