#include "main.hpp"

int main()
{
    CountryTest country = CountryTest();
    if (country.run() == Main::failure)
        cout << "Erro no teste de país" << endl;
    return Main::failure;

    cout << endl
         << endl
         << "Testes finalizados" << endl
         << endl;

    return Main::success;
}
