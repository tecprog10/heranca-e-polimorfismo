#pragma once
#include "PolReg.h"
#include <cmath>

class TrianguloEq : public PolReg
{
public:
  TrianguloEq(const double tam_lados = 0, const std::string& cor = "sem cor");
  ~TrianguloEq() override;

  double calculaArea() override;
};