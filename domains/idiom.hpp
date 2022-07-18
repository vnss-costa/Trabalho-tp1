#ifndef DOMAINS_IDIOM_HPP_
#define DOMAINS_IDIOM_HPP_

#include <stdexcept>

using namespace std;

/**
 * @brief Classe para o domínio idioma
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

class Idioma
{
private:
    const string IDIOMAS_VALIDOS[10] = {"Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio"};
    string idioma;
    void validar(string) const;

public:
    Idioma(string);
    void setIdioma(string);
    string getIdioma() const;
};

inline string Idioma::getIdioma() const
{
    return idioma;
}

#endif // DOMAINS_IDIOM_HPP_
