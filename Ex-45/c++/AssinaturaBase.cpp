#include "AssinaturaBase.h"

AssinaturaBase::AssinaturaBase(std::string msg, std::string n, std::string r)
  : m_mensagem(std::move(msg)), m_nome(std::move(n)), m_ramal(std::move(r))
{}

AssinaturaBase::~AssinaturaBase() = default;

std::string AssinaturaBase::getMensagem() const
{
  return m_mensagem;
}

std::string AssinaturaBase::getNome() const
{
  return m_nome;
}

std::string AssinaturaBase::getRamal() const
{
  return m_ramal;
}

void AssinaturaBase::setMensagem(const std::string& msg)
{
  m_mensagem = msg;
}

void AssinaturaBase::setNome(const std::string& n)
{
  m_nome = n;
}

void AssinaturaBase::setRamal(const std::string& r)
{
  m_ramal = r;
}