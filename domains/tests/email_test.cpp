#include "email_test.hpp"

// Muda o valor "email(valor)" para testar email
void EmailTest::setUp()
{
    email = new Email("pedrovilarins077@gmail.com");
    estado = SUCESSO;
}

void EmailTest::tearDown()
{
    delete email;
}

void EmailTest::testarCenarioSucesso()
{
    try
    {
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void EmailTest::testarCenarioFalha()
{
    try
    {
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (email->getEmail() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int EmailTest::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
