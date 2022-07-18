#ifndef DOMAINS_EMAIL_HPP_
#define DOMAINS_EMAIL_HPP_

#include <stdexcept>

using namespace std;

/**
 * @brief Classe para o domínio Email
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

class Email
{
private:
    const string CARACTERES_ESPECIAIS_REGEX = "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+";
    string email;
    void isValid(string) const;

public:
    Email(string);
    void setEmail(string);
    string getEmail() const;
};

inline string Email::getEmail() const
{
    return email;
}

#endif // DOMAINS_EMAIL_HPP_
