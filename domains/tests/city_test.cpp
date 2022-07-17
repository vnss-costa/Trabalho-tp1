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
    cout<<"Esperada uma entrada válida";
    try
    {
        cout<<"Cidade testada: "<<city;
        this->city->setName(city);
        cout<<"Cidade válida!";
    }
    catch (invalid_argument &message)
    {
        cout<<"Cidade inválida";
        cout<<"Mensagem de erro: "<<message.what();
        result = failure;
    }
}

void CityTest::test_invalidation(sting city)
{
    cout<<"Esperada uma entrada invalida";
    try
    {
        cout<<"Cidade testada: "<<city;
        this->city->setName(city);
        cout<<"Cidade valida!";
        result=failure;
    }
    catch (invalid_argument &message)
    {
        cout<<"Ciade inválida!";
        cout<<"Erro: "<<message.what();
    }
}