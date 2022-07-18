#include "name.hpp"
#include <string>
#include <iostream>
using namespace std;

Name::Name(string name)
{
    isValid(name);
    setName(name);
}

void Name::isValid(string name)
{
    string value = name;
    int position = name.find(" ");
    int size = value.size();
    bool hasLower = false, hasUpper = false;

    if (size > 30)
        throw invalid_argument("O nome deve ter no máximo 30 letras");

    for (int i = 0; i < size; i++)

        if (islower(name[i]))
        {
            hasLower = true;
            if (i - 1 == position || i == 0)
                throw invalid_argument("Seu primeiro nome e sobrenomes devem ter primeira letra maiúscula");
        }

        else if (isupper(name[i]))
        {
            hasUpper = true;
            if (!islower(name[i + 1]))
                throw invalid_argument("As outras letras se não as primeiras devem ser minúsculas");
        }
        else if (name[i] == ' ' && name[i + 1] == ' ')
            throw invalid_argument("Seu nome não pode ter 2 ou mais espaços seguidos");

    if (hasLower == false)
        throw invalid_argument("Seu nome deve conter pelo menos 1 letra minúscula");
    if (hasUpper == false)
        throw invalid_argument("Seu nome deve conter pelo menos 1 letra maiúscula");

    return;
}