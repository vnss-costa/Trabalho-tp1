#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class Email {
    private:
        const string CARACTERES_ESPECIAIS_REGEX = "[a-zA-Z0-9!#$%&'+=?^_`{|}~.\/-]*(@)[a-zA-Z0-9.-]*";
        string email;
        void validar(string) const;
    public:
        Email(string);
        void setEmail(string);
        string getEmail() const;

};

inline string Email::getEmail() const{
    return email;
}


#endif // DOMINIOS_H_INCLUDED
