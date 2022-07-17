#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class Nota {
    private:
        static const int MIN = 0;
        static const int MAX = 10;
        int nota;
        void validar(int) const;
    public:
        Nota(int);
        void setNota(int);
        int getNota() const;

};

inline int Nota::getNota() const {
    return nota;
}

#endif // DOMINIOS_H_INCLUDED
