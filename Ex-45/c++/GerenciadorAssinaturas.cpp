#include "GerenciadorAssinaturas.h"
#include "AssinaturaFormal.h"
#include "AssinaturaAmigavel.h"
#include "AssinaturaMinimalista.h"
#include <iostream>

GerenciadorAssinaturas::GerenciadorAssinaturas(AssinaturaBase* defaultSig)
  : m_assinatura_default(defaultSig)
{}

GerenciadorAssinaturas::~GerenciadorAssinaturas()
{
  delete m_assinatura_default;

  for(AssinaturaBase* assinatura : m_assinaturas)
  {
    delete assinatura;
  }
  m_assinaturas.clear();
}

void GerenciadorAssinaturas::adicionarAssinatura(AssinaturaBase* assinatura)
{
  if(assinatura != nullptr)
  {
    m_assinaturas.push_back(assinatura);
  }
}

void GerenciadorAssinaturas::imprimirTodasAssinaturas() const
{
  std::cout << "\n*** DEMONSTRACAO DE POLIMORFISMO ***\n" << '\n';

  if(m_assinatura_default != nullptr)
  {
    m_assinatura_default->imprimirAssinatura();
    std::cout << '\n';
  }

  for(const AssinaturaBase* assinatura : m_assinaturas)
  {
    if(assinatura != nullptr)
    {
      assinatura->imprimirAssinatura();
      std::cout << '\n';
    }
  }
}

void GerenciadorAssinaturas::escolherAssinatura(TipoDestinatario tipoDestinatario) const
{
  std::string tipoStr;
  switch (tipoDestinatario) {
    case TipoDestinatario::ClienteImportante:
      tipoStr = "cliente_importante";
      break;
    case TipoDestinatario::ColegaProximo:
      tipoStr = "colega_proximo";
      break;
    case TipoDestinatario::EmailInterno:
      tipoStr = "email_interno";
      break;
    case TipoDestinatario::Desconhecido:
    default:
      tipoStr = "destinatario_desconhecido";
      break;
  }

  std::cout << "\n=== ESCOLHENDO ASSINATURA PARA: " << tipoStr << " ===" << '\n';

  switch (tipoDestinatario) {
    case TipoDestinatario::ClienteImportante:
      for(const AssinaturaBase* assinatura : m_assinaturas)
      {
        if(dynamic_cast<const AssinaturaFormal*>(assinatura) != nullptr)
        {
          assinatura->imprimirAssinatura();
          return;
        }
      }
      break;

    case TipoDestinatario::ColegaProximo:
      for(const AssinaturaBase* assinatura : m_assinaturas)
      {
        if(dynamic_cast<const AssinaturaAmigavel*>(assinatura) != nullptr)
        {
          assinatura->imprimirAssinatura();
          return;
        }
      }
      break;

    case TipoDestinatario::EmailInterno:
      for(const AssinaturaBase* assinatura : m_assinaturas)
      {
        if(dynamic_cast<const AssinaturaMinimalista*>(assinatura) != nullptr)
        {
          assinatura->imprimirAssinatura();
          return;
        }
      }
      break;

    case TipoDestinatario::Desconhecido:
    default:
      break;
  }

  if(m_assinatura_default != nullptr)
  {
    m_assinatura_default->imprimirAssinatura();
  }
}
