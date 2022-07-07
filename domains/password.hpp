#ifndef DOMAINS_PASSWORD_HPP_
#define DOMAINS_PASSWORD_HPP_
#include <string>
using namespace std;

/**
 * @brief Classe para o domínio senha
 *
 * @author Fernando Jorge - 200017829
 */
class Password {
private:
    string password;

    void isValid(string password);

public:
    /**
     * @brief Método construtor da senha
     */
    Password();

    /**
     * @brief Construtor que seleciona a senha informada
     *
     * @param password é a senha escolhida
     * @throw invalid_argument caso não seja um país válida
     */
    Password(string password);

    /**
     * @brief Retorna qual a senha armazenada
     *
     * @return string com o valor da senha
     */
    string getPassword();

    /**
     * @brief Configura o valor da senha para o inserido
     *
     * @param password com a senha a ser inserida
     * @throw invalid_agument caso o valor seja inválido
     */
    void setPassword(string password);
};

inline string Password::getPassword() {
    return password;
}

inline void Password::setPassword(string password) {
    isValid(password);
    this->password = password;
}

inline Password::Password(){};

#endif  // DOMAINS_PASSWORD_HPP_
