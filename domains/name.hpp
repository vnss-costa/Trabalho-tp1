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
     * @brief Método construtor do nome
     */
    Name();

    /**
     * @brief Construtor que seleciona o nome informado
     *
     * @param name é o nome escolhido
     * @throw invalid_argument caso não seja um nome válido
     */
    Name(string name);

    /**
     * @brief Retorna qual o nome armazenado no objeto
     *
     * @return string com o nome
     */
    string getName();

    /**
     * @brief Configura o nome para o inserido
     *
     * @param name com o nome a ser inserido
     * @throw invalid_agument caso o valor seja inválido
     */
    void setName(string name);
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

inline Name::Name() {};

#endif // DOMAINS_NAME_HPP_
