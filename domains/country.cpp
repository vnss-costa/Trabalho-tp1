#include "country.hpp"
#include <string>
#include <iostream>

using namespace std;

Country::Country(string country)
{
    isValid(country);
    setCountry(country);
}

void Country::isValid(string country)
{
    for (int i = 0; i < 12; i++)
        if (countries[i] == country)
            return;

    throw invalid_argument("O país '" + country + "' não é valido");
}
