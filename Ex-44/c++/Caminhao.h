#pragma once
#include "Veiculo.h"

class Caminhao : public Veiculo
{
public:
	Caminhao(double valor_locacao, double imposto, int eixos);
	~Caminhao();
	double valorDiaria() const override;
private:
	int eixos;
};

