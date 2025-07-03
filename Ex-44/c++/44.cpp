#include <iostream>
#include <vector>

#include "Caminhao.h"
#include "CarroPasseio.h"
#include "Moto.h"
#include "Utilitario.h"
#include "Veiculo.h"

int main()
{
	std::vector<Veiculo*> veiculos;

  veiculos.push_back(new Caminhao(200.0, 50.0, 4));
  veiculos.push_back(new CarroPasseio(100.0, 20.0, 'A'));
  veiculos.push_back(new CarroPasseio(100.0, 20.0, 'B'));
  veiculos.push_back(new CarroPasseio(100.0, 20.0, 'C'));
	veiculos.push_back(new Utilitario(150.0, 30.0, 1000));
  veiculos.push_back(new Moto(50.0, 10.0, 125));
  veiculos.push_back(new Moto(50.0, 10.0, 250));

	for(Veiculo* veiculo : veiculos)
	{
		veiculo->imprimir();
		std::cout << std::endl;
	}

	for(Veiculo* veiculo : veiculos)
	{
		delete veiculo;
	}
}
