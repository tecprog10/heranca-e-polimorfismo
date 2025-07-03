#pragma once
class Veiculo
{
public:
	Veiculo(double valor_locacao, double imposto);
	virtual ~Veiculo();
	virtual double valorDiaria() const = 0;
	void imprimir() const;
protected:
	double valor_locacao;
	double imposto;
};

