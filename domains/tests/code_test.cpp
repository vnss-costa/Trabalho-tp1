#include "code_test.hpp"

void CodeTest::setUp()
{
    codigo = new Codigo("12345678907");
    estado = SUCESSO;
}

void CodeTest::tearDown()
{
    delete codigo;
}

void CodeTest::testarCenarioSucesso()
{
    try
    {
        codigo->setCodigo(VALOR_VALIDO);
        if (codigo->getCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void CodeTest::testarCenarioFalha()
{
    try
    {
        codigo->setCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (codigo->getCodigo() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int CodeTest::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
