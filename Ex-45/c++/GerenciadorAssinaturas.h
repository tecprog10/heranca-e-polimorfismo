#ifndef GERENCIADOR_ASSINATURAS_H
#define GERENCIADOR_ASSINATURAS_H

#include "AssinaturaBase.h"
#include <vector>

class GerenciadorAssinaturas
{
private:
  std::vector<AssinaturaBase*> m_assinaturas;
  AssinaturaBase* m_assinatura_default;

public:
  GerenciadorAssinaturas(AssinaturaBase* defaultSig);

  ~GerenciadorAssinaturas();

  void adicionarAssinatura(AssinaturaBase* assinatura);

  void imprimirTodasAssinaturas() const;

  void escolherAssinatura(TipoDestinatario tipoDestinatario) const;
};

#endif