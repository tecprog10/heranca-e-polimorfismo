#pragma once
#include "Classificavel.h"
#include <string>

class PolReg : public Classificavel
{
protected:
  int m_num_lados;
  double m_tam_lados;
  std::string m_cor;

public:
  PolReg(const int num_lados = 0, const double tam_lados = 0, std::string cor = "sem cor");
  ~PolReg() override;

  int getNumLados() const { return m_num_lados; }
  double getTamLados() const { return m_tam_lados; }
  std::string getCor() const { return m_cor; }

  void setCor(const std::string& nova_cor) { m_cor = nova_cor; }

  double calculaPerimetro() const;
  int calculaAnguloInterno() const;

  virtual double calculaArea() = 0;

  bool maiorQue(Classificavel* outro) override;
};
