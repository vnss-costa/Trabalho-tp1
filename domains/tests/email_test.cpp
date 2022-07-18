#include <string>
#include <iostream>
#include "email_test.hpp"
using namespace std;

void EmailTest::create()
{
    email = new Email("pedrovilarins077@gmail.com");
    estado = success;
}

void EmailTest::destroy()
{
    delete email;
}

void EmailTest::test_validation()
{
    cout << "Espera-se que aceite a entrada" << endl;
    try
    {
        cout << "Email testado: " << VALOR_VALIDO << endl
             << endl;
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = failure;
        else
            cout << "Email aceito!" << endl;
    }
    catch (invalid_argument &message)
    {
        cout << "Email rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n================================\n";
}

void EmailTest::test_invalidation()
{
    cout << "Espera-se que rejeite a entrada" << endl;
    try
    {
        cout << "Email testado: " << VALOR_INVALIDO << endl
             << endl;
        email->setEmail(VALOR_INVALIDO);
        cout << "Email aceito! (Inesperado)" << endl;
        estado = failure;
    }
    catch (invalid_argument &message)
    {
        cout << "Email rejeitado!" << endl;
        cout << "Erro: " << message.what() << endl;
        if (email->getEmail() == VALOR_INVALIDO)
            estado = failure;
    }
    cout << "\n================================\n";
}
int EmailTest::run()
{
    create();
    test_validation();
    test_invalidation();
    destroy();
    return estado;
}
