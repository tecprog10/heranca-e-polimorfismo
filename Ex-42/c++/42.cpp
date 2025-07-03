#include "Quadrado.h"
#include "TrianguloEq.h"
#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::string;

class Principal
{
private:
	static void trocar(Classificavel* conj[], const int i, const int j)
	{
		Classificavel* temp = conj[i];
		conj[i] = conj[j];
		conj[j] = temp;
	}

	static int particionar(Classificavel* conj[], const int baixo, const int alto)
	{
		Classificavel* pivo = conj[alto];
		int i = baixo - 1;

		for(int j = baixo; j < alto; j++)
		{
			if(!conj[j]->maiorQue(pivo))
			{
				i++;
				trocar(conj, i, j);
			}
		}
		trocar(conj, i + 1, alto);
		return i + 1;
	}

	static void quickSort(Classificavel* conj[], const int baixo, const int alto)
	{
		if(baixo < alto)
		{
			int pi = particionar(conj, baixo, alto);

			quickSort(conj, baixo, pi - 1);
			quickSort(conj, pi + 1, alto);
		}
	}
public:
	static void classifica(Classificavel* conj[], const int tamanho)
	{
		if(tamanho <= 1) return;

		quickSort(conj, 0, tamanho - 1);
	}
};

static PolReg* criarPoligono(const int num_lados, const double tam_lado, const string& cor)
{
	switch(num_lados)
	{
	case 3:
	return new TrianguloEq(tam_lado, cor);
	case 4:
	return new Quadrado(tam_lado, cor);
	default:
	cout << "Numero de lados nao suportado. Criando triangulo por padrao." << '\n';
	return new TrianguloEq(tam_lado, cor);
	}
}

int main()
{
	constexpr int NUM_POLIGONOS = 5;
	Classificavel* poligonos[NUM_POLIGONOS];

	cout << "=== CRIACAOO DE POLIGONOS REGULARES ===" << '\n';

	for(int i = 0; i < NUM_POLIGONOS; i++)
	{
		int numLados;
		double tamLado;
		string cor;

		cout << "Poligono " << (i + 1) << ":" << '\n';
		cout << "Numero de lados: ";
		cin >> numLados;
		cout << "Tamanho do lado: ";
		cin >> tamLado;
		cout << "Cor: ";
		cin >> cor;

		poligonos[i] = criarPoligono(numLados, tamLado, cor);
		cout << '\n';
	}

	Principal::classifica(poligonos, NUM_POLIGONOS);

	cout << "=== POLIGONOS CLASSIFICADOS POR AREA CRESCENTE ===" << '\n';
	cout << std::fixed << std::setprecision(2);

	for(int i = 0; i < NUM_POLIGONOS; i++)
	{
		PolReg* poligono = dynamic_cast<PolReg*>(poligonos[i]);
		if(poligono != nullptr)
		{
			cout << "Poligono " << (i + 1) << ": ";
			cout << "Cor = " << poligono->getCor() << ", ";
			cout << "Numero de lados = " << poligono->getNumLados() << ", ";
			cout << "Area = " << poligono->calculaArea() << '\n';
		}
	}

	for(int i = 0; i < NUM_POLIGONOS; i++)
	{
		delete poligonos[i];
	}

	return 0;
}