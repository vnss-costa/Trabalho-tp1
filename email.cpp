#include "email.h"
#include <regex>

void Email::validar(string email) const{
    if (!regex_match(email, regex(CARACTERES_ESPECIAIS_REGEX)))
        throw invalid_argument("Erro de sintaxe! Correto: local@dominio");
}

Email::Email(string email){
    validar(email);
    this->email = email;
}

void Email::setEmail(string email){
    validar(email);
    this->email = email;
}
