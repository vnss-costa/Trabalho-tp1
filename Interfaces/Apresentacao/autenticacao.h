#ifndef INTERFACE_A_AUTENTICACAO
#define INTERFACE_A_AUTENTICACAO

#include "../../entities/user.hpp"
#include "../../domains/email.hpp"
#include "../../domains/password.hpp"
#include "../Servicos/autenticacao.h"

// author Fernando Jorge Santos Melo - 200017829
class IApresentacaoAutenticacao
{
public:
    virtual bool autenticar(Email *) = 0;
    virtual void setPointerService(IServicoAutenticacao *) = 0;
    virtual ~IApresentacaoAutenticacao(){};
};
#endif