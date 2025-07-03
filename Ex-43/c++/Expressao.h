#ifndef EXPRESSAO_H
#define EXPRESSAO_H

#include <string>

class Expressao
{
public:
  virtual ~Expressao() = default;
  virtual double calcular() const = 0;
  virtual std::string toString() const = 0;
  virtual Expressao* clone() const = 0;
};

#endif // EXPRESSAO_H