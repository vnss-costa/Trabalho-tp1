#include <iostream>
#include <string>
#include <ctype.h>
#include "email.hpp"
#include <regex>

using namespace std;

Email::Email(string email){
    isValid(email);
    setEmail(email);
}

void Email::isValid(string email){
    int size = email.length();
    int position = email.find("@");

    if ((position == 0) || (position == size))
        throw invalid_argument("Email " + email + " com formato inválido. Correto: local@dominio");

    string locale = email.substr(0, position);
    string domain = email.substr(position + 1, -1);
    int locale_size = locale.length();
    int doamin_size = locale.length();
    
    if (locale_size > 64)
        throw invalid_argument("Parte local precisa ter no máximo 64 caracteres");
    

    int contador = 0;
    for (int i = 0; i < doamin_size; i++){
        if(email[i] == '.')
            contador = 0;
        contador++;
        if(contador ==  64){
            throw invalid_argument("Cada termo deve ser composto por no máximo 63 caracteres");
            break; 
        }
    }

    if (!regex_match(email, regex("[a-zA-Z0-9_.-]*(@)[a-zA-Z0-9.-]*")))
        throw invalid_argument("Erro de sintaxe! Correto: local@dominio");

    for (int i = 0; i < doamin_size; i++){
        if((email[i] == '.') && (email[i+1] == '.')){
            throw invalid_argument("O termo não pode conter '.' seguidos");
            break; 
        }

    }

    for (int i = 0; i < locale_size; i++){
        if (email[i] == '.'){
            if (!isalpha(email[i+1]) || (!isdigit(email[i+1])))
                throw invalid_argument("Um caractere ou digito deve seguir o '.'");
        }
    }

    if (locale[0] == '.')
        throw invalid_argument("Parte local não pode conter '.' no primeiro caractere");

    if ((domain[0] == '-') || (domain.back() == '-'))
        throw invalid_argument("Domínio não pode conter '-' no primeiro ou ultimo caractere");
    
    if (domain[0] == '.')
        throw invalid_argument("Domínio não pode conter '.' no primeiro caractere");




}

