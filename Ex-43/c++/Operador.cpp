#include "Operador.h"

Operador::Operador(Expressao* esq, Expressao* dir) : m_esquerda(esq), m_direita(dir)
{
  if(!m_esquerda || !m_direita)
  {
    throw std::invalid_argument("Operandos nulos nao sso permitidos");
  }
}

Operador::Operador(const Operador& other)
{
  m_esquerda = other.m_esquerda ? other.m_esquerda->clone() : nullptr;
  m_direita = other.m_direita ? other.m_direita->clone() : nullptr;
}

Operador& Operador::operator=(const Operador& other)
{
  if(this != &other)
  {
    delete m_esquerda;
    delete m_direita;
    m_esquerda = other.m_esquerda ? other.m_esquerda->clone() : nullptr;
    m_direita = other.m_direita ? other.m_direita->clone() : nullptr;
  }
  return *this;
}

Operador::~Operador()
{
  delete m_esquerda;
  delete m_direita;
}

std::string Operador::toString() const
{
  return "(" + m_esquerda->toString() + " " + getOperadorSimbolo() + " " + m_direita->toString() + ")";
}