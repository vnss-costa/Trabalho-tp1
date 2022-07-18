#include "name.hpp"
#include <string>
#include <iostream>
using namespace std;

/**
 * @brief implementa��o da classe name
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

void Name::isValid(string name) const
{
    int tamanho_name = name.length();

    if (tamanho_name > 30)
        throw invalid_argument("Tamanho Invalido"); // confere tamanho

    for (int i; i < tamanho_name; i++)
    {
        if (isupper(name[0]) != true) // confere se a primeira letra do name eh maiuscula
            throw invalid_argument("Primeiro nome deve comecar com letra maiuscula");

        if ((isspace(name[i]) && isspace(name[i + 1])) == true) // confere espaco duplo
            throw invalid_argument("Nao pode haver dois espacos");

        if (isspace(name[i]) && isupper(name[i + 1]) != true) // confere se o sobrename eh maiusculo
            throw invalid_argument("Sobrename deve comecar com letra maiuscula");

        if ((isalpha(name[i]) || isspace(name[i])) != true) // confere se tem entrada diferente de aspaco e letra
            throw invalid_argument("Entrada so pode conter epaco ou letra");
    }
}

Name::Name(string name)
{
    isValid(name);
    this->name = name;
}

void Name::setName(string name)
{
    isValid(name);
    this->name = name;
}