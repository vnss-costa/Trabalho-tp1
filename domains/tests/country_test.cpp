#include <string>
#include <iostream>
#include "country_test.hpp"
using namespace std;

int CountryTest::run()
{
    create();

    test_validation("Turquia");
    test_invalidation("São Paulo");

    destroy();

    return result;
}

void CountryTest::create()
{
    country = new Country("Brasil");
    result = success;
}

void CountryTest::destroy()
{
    delete country;
}

void CountryTest::test_validation(string country)
{
    cout << "Espera-se que aceite a entrada" << endl;
    try
    {
        cout << "País testado: " << country << endl
             << endl;
        this->country->setCountry(country);
        cout << "País aceito!" << endl;
    }
    catch (invalid_argument &message)
    {
        cout << "País rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        result = failure;
    }
    cout << "\n================================\n";
}

void CountryTest::test_invalidation(string country)
{
    cout << "Espera-se que rejeite a entrada" << endl;
    try
    {
        cout << "País testado: " << country << endl
             << endl;
        this->country->setCountry(country);
        cout << "País aceito!" << endl;
        result = failure;
    }
    catch (invalid_argument &message)
    {
        cout << "País rejeitado!" << endl;
        cout << "Erro: " << message.what() << endl;
    }
    cout << "\n================================\n";
}
