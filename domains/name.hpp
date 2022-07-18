#ifndef DOMAINS_NAME_HPP_
#define DOMAINS_NAME_HPP_
#include <string>
using namespace std;

/**
 * @brief Classe para o domínio nome
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

class Name
{
private:
    string name;

    void isValid(string name);

public:
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
    string getName() const;
};

inline string Name::getName() const
{
    return name;
}


#endif // DOMAINS_NAME_HPP_
