#ifndef DOMAINS_CODE_HPP_
#define DOMAINS_CODE_HPP_
#include <stdexcept>

using namespace std;

/**
 * @brief Classe para o domínio código
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

class Code
{
private:
    static const int CODE_SIZE = 11;
    static const int VERIFYING_DIGIT_POSITION = 10; // usa o posicionamento do ultimo digito
    string code;
    void validar(string) const;

public:
    /**
     * @brief Construtor que seleciona o código informada
     *
     * @param code é o código que se deseja inserir
     * @throw invalid_argument caso não seja um código válida
     */
    Code(string code);

    /**
     * @brief Configura o código para o valor inserido
     *
     * @param code com o nome a ser inserido
     * @throw invalid_agument caso o valor seja inválido
     */

    void setCode(string code);

    /**
     * @brief Retorna qual o código armazenada no objeto
     *
     * @return string com o nome do código
     */
    string getCode() const;
};

inline string Code::getCode() const
{
    return code;
}

#endif // DOMAINS_CODE_HPP_
