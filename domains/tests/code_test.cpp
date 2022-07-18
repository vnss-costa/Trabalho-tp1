#include "code_test.hpp"

void CodeTest::create()
{
    code = new Code("12345678907");
    estado = success;
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
            estado = failure;
    }
    catch (invalid_argument &excecao)
    {
        estado = failure;
    }
}

void CodeTest::test_invalidation()
{
    try
    {
        code->setCode(VALOR_INVALIDO);
        estado = failure;
    }
    catch (invalid_argument &excecao)
    {
        if (code->getCode() == VALOR_INVALIDO)
            estado = failure;
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
