#include <string>
#include <iostream>
#include "city_test.hpp"

using namespace std;

int CityTest::run()
{
    create();

    test_validation("Nova Iorque");
    test_invalidation("Brasil");

    destroy();

    return result;
}

void CityTest::create()
{
    city = new City("Rio de Janeiro");
    result = success;
}

void CityTest::destroy()
{
    delete city;
}

void CityTest::test_validation(string city)
{
    cout << "Esperada uma entrada válida" << endl;
    try
    {
        cout << "Cidade testada: " << city << endl;
        this->city->setCity(city);
        cout << "Cidade válida!" << endl
             << endl;
    }
    catch (invalid_argument &message)
    {
        cout << "Cidade inválida" << endl;
        cout << "Mensagem de erro: " << message.what() << endl
             << endl;
        result = failure;
    }
}

void CityTest::test_invalidation(string city)
{
    cout << "Esperada uma entrada invalida" << endl;
    try
    {
        cout << "Cidade testada: " << city << endl;
        this->city->setCity(city);
        cout << "Cidade valida!" << endl;
        result = failure;
    }
    catch (invalid_argument &message)
    {
        cout << "Ciade inválida!" << endl;
        cout << "Erro: " << message.what() << endl;
    }
}