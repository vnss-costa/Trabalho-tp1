#include "description.hpp"
#include <string>
#include <iostream>
using namespace std;

Description::Description(string description) {
    isValid(description);
    setDescription(description);
}

void Description::isValid(string description) {
    int size = description.size();

    if (size > 40)
        throw invalid_argument("A descrição tem mais caracteres que o permitido(40)");

    if (size < 0)
        throw invalid_argument("A descrição não tem o tamanho mínimo (0)");

    for (int i = 0; i < size; i++)
        if (description[i] == ' ' && description[i + 1] == ' ')
            throw invalid_argument("A descrição não pode conter 2 espaços em branco seguidos");
        else if (
            (description[i] == '.' || description[i] == ',' || description[i] == ':' || description[i] == ';' ||
             description[i] == '?' || description[i] == '!') &&
            (description[i + 1] == '.' || description[i + 1] == ',' || description[i + 1] == ':' || description[i + 1] == ';' ||
             description[i + 1] == '?' || description[i + 1] == '!'))
            throw invalid_argument("A descrição não pode conter 2 caracteres de pontuação seguidos");

    return;
}
