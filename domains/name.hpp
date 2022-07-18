#ifndef DOMAINS_NAME_HPP_
#define DOMAINS_NAME_HPP_

#include <stdexcept>

using namespace std;

class Nome
{
private:
    string nome;
    void validar(string) const;

public:
    Nome(string);
    void setNome(string);
    string getNome() const;
};

inline string Nome::getNome() const
{
    return nome;
}

#endif // DOMAINS_NAME_HPP_
