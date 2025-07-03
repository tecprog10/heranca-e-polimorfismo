#ifndef ASSINATURA_AMIGAVEL_H
#define ASSINATURA_AMIGAVEL_H

#include "AssinaturaBase.h"

class AssinaturaAmigavel : public AssinaturaBase
{
private:
  std::string apelido;

public:
  AssinaturaAmigavel(const std::string& msg, const std::string& nome, const std::string& ramal,
                     std::string ap);
  ~AssinaturaAmigavel() override;

  void imprimirAssinatura() const override;

  std::string getApelido() const;
  void setApelido(const std::string& ap);
};

#endif