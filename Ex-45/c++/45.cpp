#include <iostream>
#include "GerenciadorAssinaturas.h"
#include "AssinaturaDefault.h"
#include "AssinaturaFormal.h"
#include "AssinaturaAmigavel.h"
#include "AssinaturaMinimalista.h"

int main()
{
  std::cout << "=== SISTEMA DE ASSINATURAS DE E-MAIL ===" << '\n';

  AssinaturaBase* assinaturaDefault = new AssinaturaDefault(
    "Obrigado pelo contato!",
    "Joao Silva",
    "2345"
  );

  GerenciadorAssinaturas gerenciador(assinaturaDefault);

  AssinaturaBase* assinaturaFormal = new AssinaturaFormal(
    "Atenciosamente,",
    "Joao Silva",
    "2345",
    "Gerente de Vendas",
    "TechCorp Solutions Ltda."
  );

  AssinaturaBase* assinaturaAmigavel = new AssinaturaAmigavel(
    "Valeu pela mensagem!",
    "Joao Silva",
    "2345",
    "Joaozinho"
  );

  AssinaturaBase* assinaturaMinimalista = new AssinaturaMinimalista(
    "J. Silva",
    "2345"
  );

  gerenciador.adicionarAssinatura(assinaturaFormal);
  gerenciador.adicionarAssinatura(assinaturaAmigavel);
  gerenciador.adicionarAssinatura(assinaturaMinimalista);

  gerenciador.imprimirTodasAssinaturas();

  gerenciador.escolherAssinatura(TipoDestinatario::ClienteImportante);
  gerenciador.escolherAssinatura(TipoDestinatario::ColegaProximo);
  gerenciador.escolherAssinatura(TipoDestinatario::EmailInterno);
  gerenciador.escolherAssinatura(TipoDestinatario::Desconhecido);

  return 0;
}