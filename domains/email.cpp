#include "email.hpp"
#include <regex>

void Email::isValid(string email) const{
    if (!regex_match(email, regex(CARACTERES_ESPECIAIS_REGEX)))
        throw invalid_argument("Erro de sintaxe! Correto: local@dominio");
}

Email::Email(string email){
    isValid(email);
    this->email = email;
}

void Email::setEmail(string email){
    isValid(email);
    this->email = email;
}
