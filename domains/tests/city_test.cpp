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
    cout<<"\nEsperada uma entrada válida";
    try
    {
        cout<<"\nCidade testada: "<<city;
        this->city->setCity(city);
        cout<<"\nCidade válida!";
    }
    catch (invalid_argument &message)
    {
        cout<<"\nCidade inválida";
        cout<<"\nMensagem de erro: "<<message.what();
        result = failure;
    }
}

void CityTest::test_invalidation(string city)
{
    cout<<"\nEsperada uma entrada invalida";
    try
    {
        cout<<"\nCidade testada: "<<city;
        this->city->setCity(city);
        cout<<"\nCidade valida!";
        result=failure;
    }
    catch (invalid_argument &message)
    {
        cout<<"\nCiade inválida!";
        cout<<"\nErro: "<<message.what();
    }
}