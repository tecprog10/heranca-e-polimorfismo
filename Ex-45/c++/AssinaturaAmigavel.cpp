#include "AssinaturaAmigavel.h"
#include <iostream>

AssinaturaAmigavel::AssinaturaAmigavel(const std::string& msg, const std::string& nome, const std::string& ramal,
                                       std::string ap)
  : AssinaturaBase(msg, nome, ramal), apelido(std::move(ap))
{}

AssinaturaAmigavel::~AssinaturaAmigavel() = default;

void AssinaturaAmigavel::imprimirAssinatura() const
{
  std::cout << "=== ASSINATURA AMIGAVEL ===" << '\n';
  std::cout << m_mensagem << " :)" << '\n';
  std::cout << "Att, " << apelido << " (" << m_nome << ")" << '\n';
  std::cout << "Me liga no ramal " << m_ramal << " se precisar!" << '\n';
  std::cout << "============================" << '\n';
}

std::string AssinaturaAmigavel::getApelido() const
{
  return apelido;
}

void AssinaturaAmigavel::setApelido(const std::string& ap)
{
  apelido = ap;
}