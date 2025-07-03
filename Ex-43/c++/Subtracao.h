#ifndef SUBTRACAO_H
#define SUBTRACAO_H

#include "Operador.h"

class Subtracao : public Operador
{
public:
  Subtracao(Expressao* esq, Expressao* dir);

  double calcular() const override;
  Expressao* clone() const override;

protected:
  char getOperadorSimbolo() const override;
};

#endif // SUBTRACAO_H