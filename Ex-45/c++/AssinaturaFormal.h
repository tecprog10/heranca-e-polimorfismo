#ifndef ASSINATURA_FORMAL_H
#define ASSINATURA_FORMAL_H

#include "AssinaturaBase.h"

class AssinaturaFormal : public AssinaturaBase
{
private:
  std::string m_cargo;
  std::string m_empresa;

public:
  AssinaturaFormal(const std::string& msg, const std::string& nome, const std::string& ramal,
                   std::string c, std::string emp);
  ~AssinaturaFormal() override;

  void imprimirAssinatura() const override;

  std::string getCargo() const;
  std::string getEmpresa() const;
  void setCargo(const std::string& c);
  void setEmpresa(const std::string& emp);
};

#endif