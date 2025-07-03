#include "AssinaturaMinimalista.h"
#include <iostream>

AssinaturaMinimalista::AssinaturaMinimalista(const std::string& nome, const std::string& ramal)
  : AssinaturaBase("", nome, ramal)
{}

AssinaturaMinimalista::~AssinaturaMinimalista() = default;

void AssinaturaMinimalista::imprimirAssinatura() const
{
  std::cout << "=== ASSINATURA MINIMALISTA ===" << '\n';
  std::cout << m_nome << " | " << m_ramal << '\n';
  std::cout << "==============================" << '\n';
}
