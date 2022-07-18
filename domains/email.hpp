#ifndef DOMAINS_EMAIL_HPP_
#define DOMAINS_EMAIL_HPP_

#include <stdexcept>

using namespace std;

class Email
{
private:
    const string CARACTERES_ESPECIAIS_REGEX = "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+";
    string email;
    void validar(string) const;

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
