#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class Idioma {
    private:
        const string IDIOMAS_VALIDOS[10] = {"Ingles", "Chines Mandarim", "Hindi", "Espanhol","Frances", "Arabe", "Bengali", "Russo", "Portugues","Indonesio"};
        string idioma;
        void validar(string) const;

    public:
        Idioma(string);
        void setIdioma(string);
        string getIdioma() const;


};

inline string Idioma::getIdioma() const{
    return idioma;
}

#endif
