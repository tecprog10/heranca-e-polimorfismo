#ifndef POTENCIA_H
#define POTENCIA_H

#include "Operador.h"

class Potencia : public Operador
{
public:
  Potencia(Expressao* base, Expressao* expoente);

  double calcular() const override;
  Expressao* clone() const override;

protected:
  char getOperadorSimbolo() const override;
};

#endif // POTENCIA_H