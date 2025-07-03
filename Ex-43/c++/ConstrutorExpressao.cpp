#include "ConstrutorExpressao.h"
#include "Operando.h"
#include "Soma.h"
#include "Subtracao.h"
#include "Multiplicacao.h"
#include "Divisao.h"
#include "Potencia.h"

Expressao* ConstrutorExpressao::operando(const double valor)
{
  return new Operando(valor);
}

Expressao* ConstrutorExpressao::soma(Expressao* esq, Expressao* dir)
{
  return new Soma(esq, dir);
}

Expressao* ConstrutorExpressao::subtracao(Expressao* esq, Expressao* dir)
{
  return new Subtracao(esq, dir);
}

Expressao* ConstrutorExpressao::multiplicacao(Expressao* esq, Expressao* dir)
{
  return new Multiplicacao(esq, dir);
}

Expressao* ConstrutorExpressao::divisao(Expressao* esq, Expressao* dir)
{
  return new Divisao(esq, dir);
}

Expressao* ConstrutorExpressao::potencia(Expressao* base, Expressao* expoente)
{
  return new Potencia(base, expoente);
}

void limparExpressao(const Expressao* expr)
{
  delete expr;
}
