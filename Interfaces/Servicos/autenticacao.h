#ifndef INTERFACE_S_AUTENTICACAO
#define INTERFACE_S_AUTENTICACAO

#include "../../entities/user.hpp"
#include "../../domains/email.hpp"
#include "../../domains/password.hpp"

// author: Fernando Jorge Santos Melo - 200017829

class IServicoAutenticacao
{
public:
    virtual bool autenticar(Email, Password) = 0;
    virtual ~IServicoAutenticacao() {}
};
#endif