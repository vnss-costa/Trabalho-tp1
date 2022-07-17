#include "main.hpp"

int main()
{
    CountryTest country = CountryTest();
    if (country.run() == Main::failure) {
        cout << "Erro no teste de país" << endl;
        return Main::failure;
    }

    DateTest date = DateTest();
    if (date.run() == Main::failure) {
        cout << "Erro no teste de data" << endl;
        return Main::failure;
    }
    
    DescriptionTest description = DescriptionTest();
    if (description.run() == Main::failure) {
        cout << "Erro no teste de descrição" << endl;
        return Main::failure;
    }

    cout << endl
         << endl
         << "\033[1;32m Testes finalizados \033[0m\n" << endl
         << endl;

    return Main::success;
}
