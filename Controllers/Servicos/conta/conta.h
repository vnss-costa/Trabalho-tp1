#ifndef CONTROLADORA_S_CONTA
#define CONTROLADORA_S_CONTA

#include <iostream>
#include <string.h>
#include "../../../entities/user.hpp"
#include "../../../domains/email.hpp"
#include "../../../domains/password.hpp"
#include "../../../domains/name.hpp"
#include "../../../Interfaces/Servicos/conta.h"

class CntrServicoConta : public IServicoConta
{
public:
    bool cadastrarConta(User);
    bool editarConta(User);
    bool excluirConta(User);
};
#endif