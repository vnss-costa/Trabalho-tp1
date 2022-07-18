#include "main.hpp"

int main()
{
    CountryTest country = CountryTest();
    if (country.run() == Main::failure)
    {
        cout << "Erro no teste de país" << endl;
        return Main::failure;
    }

    DateTest date = DateTest();
    if (date.run() == Main::failure)
    {
        cout << "Erro no teste de data" << endl;
        return Main::failure;
    }

    DescriptionTest description = DescriptionTest();
    if (description.run() == Main::failure)
    {
        cout << "Erro no teste de descrição" << endl;
        return Main::failure;
    }

    PasswordTest password = PasswordTest();
    if (password.run() == Main::failure)
    {
        cout << "Erro no teste de senha" << endl;
        return Main::failure;
    }

    CityTest city = CityTest();
    if (city.run() == Main::failure)
    {
        cout << "Erro no teste de cidade" << endl;
        return Main::failure;
    }

    EmailTest email = EmailTest();
    if (email.run() == Main::failure)
    {
        cout << "Erro no teste de email" << endl;
        return Main::failure;
    }

    NameTest name = NameTest();
    if (name.run() == Main::failure)
    {
        cout << "Erro no teste de nome" << endl;
        return Main::failure;
    }

    IdiomTest idiom = IdiomTest();
    if (idiom.run() == Main::failure)
    {
        cout << "Erro no teste de idioma" << endl;
        return Main::failure;
    }

    // CodeTest code = CodeTest();
    // if (code.run() == Main::failure)
    // {
    //     cout << "Erro no teste de código" << endl;
    //     return Main::failure;
    // }

    GradeTest grade = GradeTest();
    if (grade.run() == Main::failure)
    {
        cout << "Erro no teste de nota" << endl;
        return Main::failure;
    }

    cout << endl
         << endl
         << "\033[1;32m Testes finalizados \033[0m\n"
         << endl
         << endl;

    return Main::success;
}
