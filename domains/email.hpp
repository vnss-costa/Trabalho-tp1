#ifndef DOMAINS_EMAIL_HPP_
#define DOMAINS_EMAIL_HPP_
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

/**
 * @brief Classe para o domínio email
 *
 * @authors Pedro Henrique Da Costa Vilarins - 180114441 e Vanessa Paixão Costa - 200028286
 */

class Email
{
private:
    const string CARACTERES_ESPECIAIS_REGEX = "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+";
    string email;
    void isValid(string) const;

public:

    /**
     * @brief Construtor padrão do domínio de email
     */
    Email();
    
    /**
     * @brief Construtor que seleciona o email informada
     *
     * @param email é o email que se deseja inserir
     * @throw invalid_argument caso não seja um email válida
     */
    Email(string email);

    /**
     * @brief Configura o email para o valor inserido
     *
     * @param email com o nome a ser inserido
     * @throw invalid_agument caso o valor seja inválido
     */

    void setEmail(string email);

    /**
     * @brief Retorna qual o email armazenada no objeto
     *
     * @return string com o nome do email
     */
    string getEmail() const;
};

inline string Email::getEmail() const
{
    return email;
}

inline Email::Email(){};

#endif // DOMAINS_EMAIL_HPP_
