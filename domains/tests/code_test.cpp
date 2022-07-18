#include "code_test.hpp"

void CodeTest::create()
{
    code = new Code("12345678907");
    estado = SUCESSO;
}

void CodeTest::destroy()
{
    delete code;
}

void CodeTest::test_validation()
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

void CodeTest::test_invalidation()
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
    create();
    test_validation();
    test_invalidation();
    destroy();
    return estado;
}
