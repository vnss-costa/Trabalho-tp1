#ifndef INTERFACE_S_CONTA
#define INTERFACE_S_CONTA

#include "../../entities/user.hpp"
#include "../../domains/email.hpp"
#include "../../domains/password.hpp"
#include "../../domains/name.hpp"

// author: Fernando Jorge Santos Melo - 200017829

class IServicoConta
{
public:
    virtual bool cadastrarConta(User *) = 0;
    virtual bool excluirConta(Email *) = 0;
    virtual bool editarConta(Email *, Name, Password) = 0;
    virtual ~IServicoConta(){};
};
#endif