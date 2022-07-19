#ifndef DOMAINS_IDIOM_HPP_
#define DOMAINS_IDIOM_HPP_
using namespace std;
#include <stdexcept>

/**
 * @brief Classe para o domínio idioma
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

class Idiom
{
private:
    string IDIOMAS_VALIDOS[10] = {"Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio"};
    string idiom;

    void isValid(string) const;

public:
    /**
     * @brief Método construtor do idioma
     */
    Idiom();

    /**
     * @brief Construtor que seleciona o idioma informada
     *
     * @param idiom é o idioma que se deseja inserir
     * @throw invalid_argument caso não seja um idioma válida
     */
    Idiom(string idiom);

    /**
     * @brief Configura o idioma para o valor inserido
     *
     * @param idiom com o idioma a ser inserido
     * @throw invalid_agument caso o valor seja inválido
     */

    void setIdiom(string idiom);

    /**
     * @brief Retorna qual o idioma armazenada no objeto
     *
     * @return string com o idioma
     */
    string getIdiom();
};

inline string Idiom::getIdiom()
{
    return idiom;
}

inline void Idiom::setIdiom(string idiom)
{
    isValid(idiom);
    this->idiom = idiom;
}

inline Idiom::Idiom(){};

#endif // DOMAINS_IDIOM_HPP_
