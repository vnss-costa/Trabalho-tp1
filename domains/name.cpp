#include "name.hpp"

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

    for (int i = 0; i < tamanho_name; i++)
    {
        if (islower(name[0])) // confere se a primeira letra do name eh maiuscula
            throw invalid_argument("Primeiro nome deve comecar com letra maiuscula");

        if (name[i] == ' ' && name[i + 1] == ' ') // confere espaco duplo
            throw invalid_argument("Nao pode haver dois espacos");

        if (name[i] == ' ' && islower(name[i + 1])) // confere se o sobrename eh maiusculo
            throw invalid_argument("Sobrenome deve comecar com letra maiuscula");

        if (!(isalpha(name[i]) || name[i] == ' ')) // confere se tem entrada diferente de aspaco e letra
            throw invalid_argument("Entrada so pode conter espaco ou letra");
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
