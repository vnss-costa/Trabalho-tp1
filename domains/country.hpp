#ifndef COUNTRY
#define COUNTRY
#include <string>
using namespace std;

/**
 * @brief Classe para o domínio país
 *
 * @author Fernando Jorge - 200017829
 */
class Country
{
private:
    inline static const string countries[12] =
    {
        "Estados Unidos",
        "Brasil",
        "China",
        "Coreia do Sul",
        "Emirados",
        "França",
        "India",
        "Japão",
        "Malasia",
        "Reino Unido",
        "Tailandia",
        "Turquia"
    };

    string country;

    void isValid(string country);
public:
    /**
     * @brief Método construtor do país
     */
    Country();

    /**
     * @brief Construtor que seleciona o país informado
     *
     * @param country é o nome do país escolhido
     * @throw invalid_argument caso não seja um país válido
     */
    Country(string country);

    /**
     * @brief Retorna qual o país armazenado no objeto
     *
     * @return string com o nome do país
     */
    string getCountry();

    /**
     * @brief Configura o nome do país para o inserido
     *
     * @param country com o nome a ser inserido
     * @throw invalid_agument caso o valor seja inválido
     */
    void setCountry(string country);
};

inline string Country::getCountry()
{
    return country;
}

inline void Country::setCountry(string country)
{
    isValid(country);
    this->country = country;
}

inline Country::Country() {};

#endif
