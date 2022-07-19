#include <iostream>
#include <string>
#include "email.hpp"
#include <regex>

using namespace std;

void Email::isValid(string email) const{
    int position = email.find("@");

    if ((position == 0) || (position == email.length()))
        throw invalid_argument("Email " + email + " com formato inválido. Correto: local@dominio");

    string locale = email.substr(0, position);
    string domain = email.substr(position + 1, -1);

    if (locale.length() > 64)
        throw invalid_argument("Parte local precisa ter no máximo 64 caracteres");
    
    if (!regex_match(email, regex(CARACTERES_ESPECIAIS_REGEX)))
        throw invalid_argument("Erro de sintaxe! Correto: local@dominio");
    
    contador = 0;
    for (int i = 0; i < domain; i++){
        if(email[i] == ".")
            contador = 0;
        contador++;
        if(contador ==  64)
            throw invalid_argument("Cada termo deve ser composto por no máximo 63 caracteres");
            break; 

    }

    if (locale[0] == '.')
        throw invalid_argument("Parte local não pode conter '.' no primeiro caractere");

    if ((domain[0] == '-') || (domain.back() == '-'))
        throw invalid_argument("Domínio não pode conter '-' no primeiro ou ultimo caractere");
    
    if (domain[0] == '.')
        throw invalid_argument("Domínio não pode conter '.' no primeiro caractere");




}

Email::Email(string email){
    isValid(email);
    this->email = email;
}

void Email::setEmail(string email){
    isValid(email);
    this->email = email;
}
