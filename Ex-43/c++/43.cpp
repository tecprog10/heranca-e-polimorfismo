#include <iostream>
#include "ConstrutorExpressao.h"

static void exemplo1()
{
  const Expressao* expr = nullptr;
  const Expressao* soma = nullptr;
  const Expressao* divisaoPorZero = nullptr;

  std::cout << "=== Exemplo 1 ===" << '\n';

  try
  {
    // Criando a expressao: (5 + 3) * (10 / 2) - 4^2
    expr = ConstrutorExpressao::subtracao(
      ConstrutorExpressao::multiplicacao(
      ConstrutorExpressao::soma(
      ConstrutorExpressao::operando(5),
      ConstrutorExpressao::operando(3)
    ),
      ConstrutorExpressao::divisao(
      ConstrutorExpressao::operando(10),
      ConstrutorExpressao::operando(2)
    )
    ),
      ConstrutorExpressao::potencia(
      ConstrutorExpressao::operando(4),
      ConstrutorExpressao::operando(2)
    )
    );

    std::cout << "Expressao: " << expr->toString() << '\n';
    std::cout << "Resultado: " << expr->calcular() << '\n';
    std::cout << '\n';

    // Testando expressoes mais simples
    soma = ConstrutorExpressao::soma(
      ConstrutorExpressao::operando(15),
      ConstrutorExpressao::operando(25)
    );

    std::cout << "Expressao: " << soma->toString() << '\n';
    std::cout << "Resultado: " << soma->calcular() << '\n';
    std::cout << '\n';

    // Testando divisao por zero (deve lancar excecao)
    std::cout << "Testando divisao por zero:" << '\n';
    divisaoPorZero = ConstrutorExpressao::divisao(
      ConstrutorExpressao::operando(10),
      ConstrutorExpressao::operando(0)
    );

    std::cout << "Expressao: " << divisaoPorZero->toString() << '\n';
    std::cout << "Resultado: " << divisaoPorZero->calcular() << '\n';

  }
  catch(const std::exception& e)
  {
    std::cout << "Erro: " << e.what() << '\n';
  }

  // Limpeza da memoria
  limparExpressao(expr);
  limparExpressao(soma);
  limparExpressao(divisaoPorZero);
}

static void exemplo2()
{
  std::cout << "=== Exemplo 2 ===" << '\n';

  // Criando operandos individuais
  Expressao* num1 = ConstrutorExpressao::operando(7.5);
  Expressao* num2 = ConstrutorExpressao::operando(2.5);
  Expressao* num3 = ConstrutorExpressao::operando(3.0);

  // Criando operacoes
  Expressao* multiplicacao = ConstrutorExpressao::multiplicacao(num1, num2);
  const Expressao* soma = ConstrutorExpressao::soma(multiplicacao, num3);

  std::cout << "Operacao: " << soma->toString() << '\n';
  std::cout << "Resultado: " << soma->calcular() << '\n';
  std::cout << '\n';

  // Testando clonagem
  const Expressao* copia = soma->clone();
  std::cout << "Copia da expressao: " << copia->toString() << '\n';
  std::cout << "Resultado da copia: " << copia->calcular() << '\n';
  std::cout << '\n';

  // Limpeza da memoria
  limparExpressao(soma);
  limparExpressao(copia);
}

int main()
{
  std::cout << "=== Hierarquia de Classes para Expressoes Numericas ===" << '\n';
  std::cout << '\n';

  exemplo1();
  std::cout << '\n';
  exemplo2();

  return 0;
}