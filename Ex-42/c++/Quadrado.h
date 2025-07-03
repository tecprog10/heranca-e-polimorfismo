#pragma once
#include "PolReg.h"

// Classe derivada de pol�gono regular
class Quadrado : public PolReg
{
public:
  // Construtor - quadrado tem 4 lados por padr�o
  Quadrado(const double tam_lados = 0, const std::string& cor = "sem cor");
  ~Quadrado() override;

  // Redefini��o polim�rfica do m�todo 
  double calculaArea() override;
};