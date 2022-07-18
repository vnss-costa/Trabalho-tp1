#include "name_test.hpp"

void NameTest::setUp()
{
    nome = new Nome("pedro Henrique Da Costa Vilari");
    estado = SUCESSO;
}

void NameTest::tearDown()
{
    delete nome;
}

void NameTest::testarCenarioSucesso()
{
    try
    {
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void NameTest::testarCenarioFalha()
{
    try
    {
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int NameTest::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
