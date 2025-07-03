#ifndef DIVISAO_H
#define DIVISAO_H

#include "Operador.h"

class Divisao : public Operador
{
public:
  Divisao(Expressao* esq, Expressao* dir);

  double calcular() const override;
  Expressao* clone() const override;

protected:
  char getOperadorSimbolo() const override;
};

#endif // DIVISAO_H