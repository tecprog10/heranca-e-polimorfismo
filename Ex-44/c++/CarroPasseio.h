#pragma once
#include "Veiculo.h"

class CarroPasseio : public Veiculo
{
public:
	CarroPasseio(double valor_locacao, double imposto, char categoria);
	virtual ~CarroPasseio();
	double valorDiaria() const override;
private:
	char categoria;
};

