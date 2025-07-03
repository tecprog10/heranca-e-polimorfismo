#ifndef MULTIPLICACAO_H
#define MULTIPLICACAO_H

#include "Operador.h"

class Multiplicacao : public Operador
{
public:
  Multiplicacao(Expressao* esq, Expressao* dir);

  double calcular() const override;
  Expressao* clone() const override;

protected:
  char getOperadorSimbolo() const override;
};

#endif // MULTIPLICACAO_H
