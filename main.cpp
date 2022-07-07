#include "main.hpp"

int main()
{
    CountryTest country = CountryTest();
    if (country.run() == Main::failure) {
        cout << "Erro no teste de país" << endl;
        return Main::failure;
    }

    PasswordTest password = PasswordTest();
    if (password.run() == Main::failure) {
        cout << "Erro no teste de senha" << endl;
        return Main::failure;
    }

    cout << endl
         << endl
         << "\033[1;32m Testes finalizados \033[0m\n" << endl
         << endl;

    return Main::success;
}
