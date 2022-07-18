#include "main.hpp"
#include <iostream>

using namespace std;

int main()
{
    CityTest city = CityTest();
    if (city.run() == Main::failure) {
        cout<< "\nErro no teste de cidade";
        return Main::failure;
    }

    cout<<"\nTestes finalizados";

    return Main::success;
}