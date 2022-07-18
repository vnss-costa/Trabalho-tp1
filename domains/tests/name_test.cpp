#include <string>
#include <iostream>
#include "name_test.hpp"
using namespace std;

int NameTest::run()
{
    create();

    test_validation();
    test_invalidation();

    destroy();

    return result;
}

void NameTest::create()
{
    name = new Name("Pedro");
    result = success;
}

void NameTest::destroy()
{
    delete name;
}

void NameTest::test_validation()
{
    cout << "Espera-se que aceite a entrada" << endl;
    try
    {
        cout << "Nome testado: " << VALOR_VALIDO << endl
             << endl;
        this->name->setName(VALOR_VALIDO);
        cout << "Nome aceito!" << endl;
    }
    catch (invalid_argument &message)
    {
        cout << "Nome rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        result = failure;
    }
    cout << "\n================================\n";
}

void NameTest::test_invalidation()
{
    cout << "Espera-se que rejeite a entrada" << endl;
    try
    {
        cout << "Nome testado: " << VALOR_INVALIDO << endl
             << endl;
        this->name->setName(VALOR_INVALIDO);
        cout << "Nome aceito! (Inesperado)" << endl;
        result = failure;
    }
    catch (invalid_argument &message)
    {
        cout << "Nome rejeitado!" << endl;
        cout << "Erro: " << message.what() << endl;
    }
    cout << "\n================================\n";
}
