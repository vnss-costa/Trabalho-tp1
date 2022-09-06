#ifndef STUBS
#define STUBS

#include "../Interfaces/Servicos/autenticacao.h"
#include "../Interfaces/Servicos/conta.h"
#include "../domains/password.hpp"
#include "../domains/email.hpp"
#include "../entities/user.hpp"

class StubServicoAutenticacao : public IServicoAutenticacao
{
private:
    inline static const string INVALIDO = "0000000000";

public:
    bool autenticar(Email, Password);
};

// author: Fernando Jorge Santos Melo - 200017829
class StubServicoConta : public IServicoConta
{
private:
    inline static const string EMAIL_INVALIDO = "email@dominio";

public:
    bool cadastrarConta(User *);
    bool excluirConta(Email *);
    bool editarConta(Email *, Name, Password);
};

#endif
