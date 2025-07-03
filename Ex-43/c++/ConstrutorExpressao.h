#ifndef CONSTRUTOR_EXPRESSAO_H
#define CONSTRUTOR_EXPRESSAO_H

#include "Expressao.h"

class ConstrutorExpressao
{
public:
  static Expressao* operando(double valor);
  static Expressao* soma(Expressao* esq, Expressao* dir);
  static Expressao* subtracao(Expressao* esq, Expressao* dir);
  static Expressao* multiplicacao(Expressao* esq, Expressao* dir);
  static Expressao* divisao(Expressao* esq, Expressao* dir);
  static Expressao* potencia(Expressao* base, Expressao* expoente);
};

void limparExpressao(const Expressao* expr);

#endif // CONSTRUTOR_EXPRESSAO_H