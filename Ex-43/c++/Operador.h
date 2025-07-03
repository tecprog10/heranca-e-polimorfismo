#ifndef OPERADOR_H
#define OPERADOR_H

#include "Expressao.h"
#include <stdexcept>

class Operador : public Expressao
{
protected:
  Expressao* m_esquerda;
  Expressao* m_direita;

public:
  Operador(Expressao* esq, Expressao* dir);
  Operador(const Operador& other);
  Operador& operator=(const Operador& other);
  ~Operador() override;

  std::string toString() const override;

protected:
  virtual char getOperadorSimbolo() const = 0;
};

#endif // OPERADOR_H