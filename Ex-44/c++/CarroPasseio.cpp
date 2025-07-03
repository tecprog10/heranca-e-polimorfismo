#include "CarroPasseio.h"

CarroPasseio::CarroPasseio(const double valor_locacao, const double imposto, const char categoria) :
	Veiculo(valor_locacao, imposto), categoria(categoria)
{}

CarroPasseio::~CarroPasseio()
{}

double CarroPasseio::valorDiaria() const
{
	double fator;
	switch(categoria)
	{
	case 'A':
	fator = 1.0;
	break;
	case 'B':
	fator = 1.2;
	break;
	case 'C':
	fator = 1.4;
	break;
	default:
	fator = 1.0;
	break;
	}
	return (valor_locacao + imposto) * fator;
}

