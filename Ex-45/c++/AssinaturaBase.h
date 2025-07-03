#ifndef ASSINATURA_BASE_H
#define ASSINATURA_BASE_H

#include <string>

enum class TipoDestinatario : std::uint8_t{
    ClienteImportante,
    ColegaProximo,
    EmailInterno,
    Desconhecido
};

class AssinaturaBase
{
protected:
  std::string m_mensagem;
  std::string m_nome;
  std::string m_ramal;

public:
  AssinaturaBase(std::string msg, std::string n, std::string r);

  virtual ~AssinaturaBase();

  virtual void imprimirAssinatura() const = 0;

  std::string getMensagem() const;
  std::string getNome() const;
  std::string getRamal() const;

  void setMensagem(const std::string& msg);
  void setNome(const std::string& n);
  void setRamal(const std::string& r);
};

#endif