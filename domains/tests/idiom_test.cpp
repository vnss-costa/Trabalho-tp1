#include "idiom_test.hpp"

void IdiomTest::setUp()
{
    idioma = new Idioma("Ingles");
    estado = SUCESSO;
}

void IdiomTest::tearDown()
{
    delete idioma;
}

void IdiomTest::testarCenarioSucesso()
{
    try
    {
        idioma->setIdioma(VALOR_VALIDO);
        if (idioma->getIdioma() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void IdiomTest::testarCenarioFalha()
{
    try
    {
        idioma->setIdioma(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao)
    {
        if (idioma->getIdioma() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int IdiomTest::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
