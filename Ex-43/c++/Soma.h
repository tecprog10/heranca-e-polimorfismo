#ifndef SOMA_H
#define SOMA_H

#include "Operador.h"

class Soma : public Operador
{
public:
  Soma(Expressao* esq, Expressao* dir);

  double calcular() const override;
  Expressao* clone() const override;

protected:
  char getOperadorSimbolo() const override;
};

#endif // SOMA_H