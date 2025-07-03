#ifndef ASSINATURA_DEFAULT_H
#define ASSINATURA_DEFAULT_H

#include "AssinaturaBase.h"

class AssinaturaDefault : public AssinaturaBase
{
public:
  AssinaturaDefault(const std::string& msg, const std::string& nome, const std::string& ramal);
  ~AssinaturaDefault() override;

  void imprimirAssinatura() const override;
};

#endif

/*
- m_cargo: string
- m_empresa: string
<<Construtora>>+ AssinaturaFormal(msg: const string&, nome: const string&, ramal: const string&, c: string, emp: string)
<<Destrutora>>+ AssinaturaFormal()
+ imprimirAssinatura(): void
+ getCargo(): string
+ getEmpresa(): string
+ setCargo(c: const string&): void
+ setEmpresa(emp: const string&): void

- apelido: string
<<Construtora>>+ AssinaturaAmigavel(msg: const string&, nome: const string&, ramal: const string&, ap: string)
<<Destrutora>>+ AssinaturaAmigavel()
+ imprimirAssinatura(): void
+ getApelido(): string
+ setApelido(ap: const string&): void

<<Construtora>>+ AssinaturaMinimalista(nome: const string&, ramal: const string&)
<<Destrutora>>+ AssinaturaMinimalista()
+ imprimirAssinatura(): void

- m_assinaturas: vector<AssinaturaBase*>
- m_assinatura_default: AssinaturaBase*
<<Construtora>>+ GerenciadorAssinaturas(defaultSig: AssinaturaBase*)
<<Destrutora>>+ GerenciadorAssinaturas()
+ adicionarAssinatura(assinatura: AssinaturaBase*): void
+ imprimirTodasAssinaturas(): void
+ escolherAssinatura(tipoDestinatario: TipoDestinatario): void

*/