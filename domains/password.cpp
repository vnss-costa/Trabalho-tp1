#include "password.hpp"
#include <string>
#include <iostream>
using namespace std;

Password::Password(string password) {
    isValid(password);
    setPassword(password);
}

void Password::isValid(string password) {
    string value = password;
    int size = value.size();
    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;

    if (size != 5)
        throw invalid_argument("A senha deve seguir o formato 'XXXXX'");

    for (int i = 0; i < size; i++)
        if (islower(password[i]))
            hasLower = true;
        else if (isupper(password[i]))
            hasUpper = true;
        else if (isdigit(password[i]))
            hasDigit = true;
        else if (password[i] == '.' || password[i] == '#' || password[i] == '$' || password[i] == '%' ||
                 password[i] == '&')
            hasSpecial = true;
        else {
            cout << " '" << password[i] << "'" << endl;
            throw invalid_argument("Caractere(s) não reconhecido(s)! Aceita-se: A-Z, a-Z, 0-9 e especiais (! # $ % &)");
        };

    if (hasLower == false)
        throw invalid_argument("Sua senha deve conter pelo menos 1 letra minúscula");
    if (hasUpper == false)
        throw invalid_argument("Sua senha deve conter pelo menos 1 letra maiúscula");
    if (hasDigit == false)
        throw invalid_argument("Sua senha deve conter pelo menos 1 número");
    if (hasSpecial == false)
        throw invalid_argument("Sua senha deve conter pelo menos 1 caractere especial (! # $ % &)");

    return;
}
