#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class Codigo {
    private:
        static const int TAMANHO_CODIGO = 11;
        static const int POSICAO_DIGITO_VERIFICADOR = 10; //usa o posicionamento do ultimo digito
        string codigo;
        void validar(string) const;
    public:
        Codigo(string);
        void setCodigo(string);
        string getCodigo() const;

};

inline string Codigo::getCodigo() const {
    return codigo;
}

#endif // DOMINIOS_H_INCLUDED
