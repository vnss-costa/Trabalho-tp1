#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class Nome {
    private:
        string nome;
        void validar(string) const;

    public:
        Nome(string);
        void setNome(string);
        string getNome() const;
};

inline string Nome::getNome() const{
    return nome;
}

#endif

