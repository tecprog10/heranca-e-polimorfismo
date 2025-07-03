#include "AssinaturaFormal.h"
#include <iostream>

AssinaturaFormal::AssinaturaFormal(const std::string& msg, const std::string& nome, const std::string& ramal,
                                   std::string c, std::string emp)
  : AssinaturaBase(msg, nome, ramal), m_cargo(std::move(c)), m_empresa(std::move(emp))
{}

AssinaturaFormal::~AssinaturaFormal() = default;

void AssinaturaFormal::imprimirAssinatura() const
{
  std::cout << "=== ASSINATURA FORMAL ===" << '\n';
  std::cout << m_mensagem << '\n';
  std::cout << m_nome << " - " << m_cargo << '\n';
  std::cout << m_empresa << '\n';
  std::cout << "Contato: Ramal " << m_ramal << '\n';
  std::cout << "=========================" << '\n';
}

std::string AssinaturaFormal::getCargo() const
{
  return m_cargo;
}

std::string AssinaturaFormal::getEmpresa() const
{
  return m_empresa;
}

void AssinaturaFormal::setCargo(const std::string& c)
{
  m_cargo = c;
}

void AssinaturaFormal::setEmpresa(const std::string& emp)
{
  m_empresa = emp;
}