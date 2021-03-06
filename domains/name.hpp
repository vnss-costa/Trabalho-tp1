#ifndef DOMAINS_NAME_HPP_
#define DOMAINS_NAME_HPP_
using namespace std;
#include <stdexcept>

/**
 * @brief Classe para o domínio nome
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

class Name
{
private:
    string name;

    void isValid(string) const;

public:
    /**
     * @brief Método construtor do nome
     */
    Name();

    /**
     * @brief Construtor que seleciona o nome informada
     *
     * @param name é o nome que se deseja inserir
     * @throw invalid_argument caso não seja um nome válida
     */
    Name(string name);

    /**
     * @brief Configura o nome para o valor inserido
     *
     * @param name com o nome a ser inserido
     * @throw invalid_agument caso o valor seja inválido
     */

    void setName(string name);

    /**
     * @brief Retorna qual o nome armazenada no objeto
     *
     * @return string com o nome
     */
    string getName();
};

inline string Name::getName()
{
    return name;
}

inline void Name::setName(string name)
{
    isValid(name);
    this->name = name;
}

inline Name::Name(){};

#endif // DOMAINS_NAME_HPP_
