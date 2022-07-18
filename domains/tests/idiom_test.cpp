#include <string>
#include <iostream>
#include "idiom_test.hpp"
using namespace std;

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
    cout << "Espera-se que aceite a entrada" << endl;
    try
    {
        cout << "Idioma testado: " << VALOR_VALIDO << endl
             << endl;
        idioma->setIdioma(VALOR_VALIDO);
        if (idioma->getIdioma() != VALOR_VALIDO)
            estado = FALHA;
        else
            cout << "Idioma aceito!" << endl;
    }
    catch (invalid_argument &message)
    {
        cout << "Idioma rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = FALHA;
    }
    cout << "\n================================\n";
}

void IdiomTest::testarCenarioFalha()
{
    cout << "Espera-se que rejeite a entrada" << endl;
    try
    {
        cout << "Idioma testado: " << VALOR_INVALIDO << endl
             << endl;
        idioma->setIdioma(VALOR_INVALIDO);
        cout << "Idioma aceito! (Inesperado)" << endl;
        estado = FALHA;
    }
    catch (invalid_argument &message)
    {
        cout << "Idioma rejeitado!" << endl;
        cout << "Erro: " << message.what() << endl;
        if (idioma->getIdioma() == VALOR_INVALIDO)
            estado = FALHA;
    }
    cout << "\n================================\n";
}
int IdiomTest::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
