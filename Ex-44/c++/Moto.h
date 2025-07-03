#pragma once
#include "Veiculo.h"
class Moto : public Veiculo
{
public:
	Moto(double valor_locacao, double imposto, int cilindradas);
	virtual ~Moto();
	double valorDiaria() const override;
private:
	int cilindradas;
};

