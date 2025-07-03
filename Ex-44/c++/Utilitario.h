#pragma once
#include "Veiculo.h"
class Utilitario : public Veiculo
{
public:
	Utilitario(double valor_locacao, double imposto, double capacidade_carga);
	virtual ~Utilitario();
	double valorDiaria() const override;
private:
	double capacidade_carga;
};

