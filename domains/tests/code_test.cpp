#include "code_test.hpp"

void CodeTest::setUp()
{
    code = new Code("12345678907");
    estado = SUCESSO;
}

void CodeTest::tearDown()
{
    delete code;
}

void CodeTest::testarCenarioSucesso()
{
    try
    {
        code->setCode(VALOR_VALIDO);
        if (code->getCode() != VALOR_VALIDO)
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
        code->setCode(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (code->getCode() == VALOR_INVALIDO)
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
