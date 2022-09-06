#ifndef INTERFACE_A_CONTA
#define INTERFACE_A_CONTA

#include "../../entities/user.hpp"
#include "../../domains/email.hpp"
#include "../../domains/password.hpp"
#include "../../domains/name.hpp"
#include "../Servicos/conta.h"

// author: Fernando Jorge Santos Melo - 200017829
class IApresentacaoConta
{
public:
    virtual void executar(Email) = 0;
    virtual void cadastrar() = 0;
    virtual void editar(Email *) = 0;
    virtual void excluir(Email *) = 0;
    virtual void setPointerService(IServicoConta *) = 0;
    virtual ~IApresentacaoConta(){};
};
#endif