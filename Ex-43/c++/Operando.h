#ifndef OPERANDO_H
#define OPERANDO_H

#include "Expressao.h"

class Operando : public Expressao
{
private:
  double m_valor;

public:
  explicit Operando(double v);

  double calcular() const override;
  std::string toString() const override;
  Expressao* clone() const override;

  double getValor() const;
  void setValor(double v);
};

#endif // OPERANDO_H