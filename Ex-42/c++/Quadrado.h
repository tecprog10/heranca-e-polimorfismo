#pragma once
#include "PolReg.h"

// Classe derivada de polígono regular
class Quadrado : public PolReg
{
public:
  // Construtor - quadrado tem 4 lados por padrão
  Quadrado(const double tam_lados = 0, const std::string& cor = "sem cor");
  ~Quadrado() override;

  // Redefinição polimórfica do método 
  double calculaArea() override;
};