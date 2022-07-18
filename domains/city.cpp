#include "city.hpp"
#include <string>
#include <iostream>

using namespace std;

City::City(string city)
{
    isValid(city);
    this->city = city;
}

void City::isValid(string city)
{
    for (int i = 0; i < 19; i++)
        if (cities[i] == city)
            return;
    throw invalid_argument("A cidade '" + city + "' não é válida" );
}
