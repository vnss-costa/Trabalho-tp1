#include <string>
#include <iostream>
#include "name_test.hpp"
using namespace std;

/**
 * @brief implementa��o do teste de unidade da classe name
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

void NameTest::create()
{
    name = new Name("Pedro Henrique Da Costa Vilari");
    estado = SUCESSO;
}

void NameTest::destroy()
{
    delete name;
}

void NameTest::test_validation()
{
    try
    {
        name->setName(VALOR_VALIDO);
        if (name->getName() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void NameTest::test_invalidation()
{
    try
    {
        name->setName(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (name->getName() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int NameTest::run()
{
    create();
    test_validation();
    test_invalidation();
    destroy();
    return estado;
}