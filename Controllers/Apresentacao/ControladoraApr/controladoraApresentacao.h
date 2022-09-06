#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

#include <iostream>
#include <string.h>
#include "../../../Interfaces/Apresentacao/conta.h"
#include "../../../Interfaces/Apresentacao/autenticacao.h"

class CntrApresentacaoControle
{
private:
    Email email;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoConta *cntrApresentacaoConta;

public:
    void executar();
    void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *);
    void setCntrApresentacaoConta(IApresentacaoConta *);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr)
{
    cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoConta(IApresentacaoConta *cntr)
{
    cntrApresentacaoConta = cntr;
}

#endif