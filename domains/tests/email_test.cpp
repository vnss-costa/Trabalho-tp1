#include <string>
#include <iostream>
#include "email_test.hpp"
using namespace std;

int EmailTest::run()
{
    create();
    test_validation("vanessapaixao@cjr.org.br");
    test_invalidation("vanessacosta[paixao@cjr.org.br");
    test_invalidation("local_dominio2.org.br");
    test_invalidation("email-invalido.por-excesso_de_caracteres.precisamos-de_outro.Exemplo@dominio3.org.br");
    test_invalidation("vanessa_-paixao@unb.br");
    test_invalidation(".vanessapaixao@unb.br");
    test_invalidation("vanessapaixao@unbbr");
    test_invalidation("vanessapaixao@.unb.br");
    test_invalidation("vanessapaixao@unb..br");
    test_invalidation("local@dominio-invalido-por-termos-com-excesso-de-caracteres-precisamos-de.outro.Exemplo");
    test_invalidation("vanessapaixao@-unb.br");
    test_invalidation("vanessapaixao@unb.br-");
    test_invalidation("vanessapaixao@aluno*unb.br");


    destroy();
    return result;
}

void EmailTest::create()
{
    email = new Email("pedrovilarins077@gmail.com");
    result = success;
}

void EmailTest::destroy()
{
    delete email;
}

void EmailTest::test_validation(string email)
{
    cout << "Espera-se que aceite a entrada" << endl;
    try
    {
        cout << "Email testado: " << email << endl
             << endl;
        this->email->setEmail(email);
        cout << "Email aceito!" << endl;
    }
    catch (invalid_argument &message)
    {
        cout << "Email rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        result = failure;
    }
    cout << "\n================================\n";
}

void EmailTest::test_invalidation(string email)
{
    cout << "Espera-se que rejeite a entrada" << endl;
    try
    {
        cout << "Email testado: " << email << endl
             << endl;
        this->email->setEmail(email);
        cout << "Email aceito!" << endl;
        result = failure;
    }
    catch (invalid_argument &message)
    {
        cout << "Email rejeitado!" << endl;
        cout << "Erro: " << message.what() << endl;
    }
    cout << "\n================================\n";
}
