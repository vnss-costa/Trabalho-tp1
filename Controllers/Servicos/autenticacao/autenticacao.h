#ifndef CONTROLADORA_S_AUTENTICACAO
#define CONTROLADORA_S_AUTENTICACAO

#include <iostream>
#include <string.h>
#include "../../../entities/user.hpp"
#include "../../../domains/email.hpp"
#include "../../../domains/password.hpp"
#include "../../../Interfaces/Apresentacao/autenticacao.h"
#include "../../../Interfaces/Servicos/autenticacao.h"

class CntrServicoAutenticacao : public IServicoAutenticacao
{
public:
    bool autenticar(Email, Password);
};
#endif