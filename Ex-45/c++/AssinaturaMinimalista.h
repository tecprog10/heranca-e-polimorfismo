#ifndef ASSINATURA_MINIMALISTA_H
#define ASSINATURA_MINIMALISTA_H

#include "AssinaturaBase.h"

class AssinaturaMinimalista : public AssinaturaBase
{
public:
  AssinaturaMinimalista(const std::string& nome, const std::string& ramal);
  ~AssinaturaMinimalista() override;

  void imprimirAssinatura() const override;
};

#endif