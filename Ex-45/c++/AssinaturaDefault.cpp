#include "AssinaturaDefault.h"
#include <iostream>

AssinaturaDefault::AssinaturaDefault(const std::string& msg, const std::string& nome, const std::string& ramal)
  : AssinaturaBase(msg, nome, ramal)
{}

AssinaturaDefault::~AssinaturaDefault() = default;

void AssinaturaDefault::imprimirAssinatura() const
{
  std::cout << "=== ASSINATURA PADRAO ===" << '\n';
  std::cout << m_mensagem << '\n';
  std::cout << m_nome << '\n';
  std::cout << "Ramal: " << m_ramal << '\n';
  std::cout << "=========================" << '\n';
}
