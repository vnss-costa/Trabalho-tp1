#ifndef CONTROLADORA_A_AUTENTICACAO
#define CONTROLADORA_A_AUTENTICACAO

#include <iostream>
#include <string.h>
#include "../../../entities/user.hpp"
#include "../../../domains/email.hpp"
#include "../../../domains/password.hpp"
#include "../../../Interfaces/Apresentacao/autenticacao.h"
#include "../../../Interfaces/Servicos/autenticacao.h"
#include "../../../stubs/stubs.h"

using namespace std;

// author: Fernando Jorge Santos Melo - 200017829

class CntrApresentacaoAutenticacao : public IApresentacaoAutenticacao
{
private:
    IServicoAutenticacao *servico;

public:
    bool autenticar(Email *);
    void setPointerService(IServicoAutenticacao *servico);
};

inline void CntrApresentacaoAutenticacao::setPointerService(IServicoAutenticacao *servico)
{
    this->servico = servico;
}

#endif