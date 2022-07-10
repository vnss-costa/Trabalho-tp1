#include "date_test.hpp"
#include <string>
#include <iostream>
using namespace std;

int DateTest::run()
{
    create();

    test_invalidation("11/jan");
    test_invalidation("Jan/11");
    test_invalidation("01/Jan/2022");
    test_validation("11/Jan");

    destroy();

    return result;
}

void DateTest::create()
{
    date = new Date("22/Mar");
    result = success;
}

void DateTest::destroy()
{
    delete date;
}

void DateTest::test_validation(string date)
{
    cout << "Espera-se que aceite a entrada" << endl;
    try
    {
        cout << "Data testada: " << date << endl
             << endl;
        this->date->setDate(date);
        cout << "Data aceita!" << endl;
    }
    catch (invalid_argument &message)
    {
        cout << "Data rejeitada!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        result = failure;
    }
    cout << "\n================================\n";
}

void DateTest::test_invalidation(string date)
{
    cout << "Espera-se que rejeite a entrada" << endl;
    try
    {
        cout << "Data testada: " << date << endl
             << endl;
        this->date->setDate(date);
        cout << "Data aceita!" << endl;
        result = failure;
    }
    catch (invalid_argument &message)
    {
        cout << "Data rejeitada!" << endl;
        cout << "Erro: " << message.what() << endl;
    }
    cout << "\n================================\n";
}
