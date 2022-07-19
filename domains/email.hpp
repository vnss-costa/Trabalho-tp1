#ifndef DOMAINS_EMAIL_HPP_
#define DOMAINS_EMAIL_HPP_
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Classe para o domínio email
 *
 * @authors Pedro Henrique Da Costa Vilarins - 180114441 e Vanessa Paixão Costa - 200028286
 */

class Email
{
    private:
        string email;
        void isValid(string email);

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
    string getEmail();
};

inline string Email::getEmail()
{
    return email;
}

inline void Email::setEmail(string email)
{
    isValid(email);
    this->email = email;
}

inline Email::Email(){};

#endif // DOMAINS_EMAIL_HPP_
