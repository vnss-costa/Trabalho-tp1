#ifndef ENTITIES_USER_HPP_
#define ENTITIES_USER_HPP_
#include "../domains/name.hpp"
#include "../domains/email.hpp"
#include "../domains/password.hpp"
#include "../domains/idiom.hpp"
#include "../domains/date.hpp"
#include "../domains/description.hpp"

/**
 *
 * @brief Classe User
 * @author Fernando Jorge - 200017829
 *
 * Entidade User, que guarda o User
 */

class User
{
private:
    Name name;
    Email email;
    Password password;
    Idiom idiom;
    Date date;
    Description description;

public:
    /**
     * @brief Construtor padrão do usuário
     */
    User();

    /**
     * @brief construtor que recebe apenas o email
     * @param email configura o email do usuario, caso seja válido
     * @throw invalid argument quando o email inserido for invalido
     */
    User(Email);

    /**
     * @brief construtor que recebe o email e a senha
     * @param email configura o email do usuário, caso seja válido
     * @param name configura o nome do usuário, caso seja válido
     * @throw invalid_argument quando algum valor for invalido
     */
    User(Email, Name);

    /**
     * @brief construtor que recebe o email e a senha
     * @param email configura o email do usuário, caso seja válido
     * @param name configura o nome do usuário, caso seja válido
     * @param password configura a senha do usuário, caso seja válido
     * @throw invalid_argument quando algum valor for invalido
     */
    User(Email, Name, Password);

    /**
     * @brief construtor que recebe o email e a senha
     * @param email configura o email do usuário, caso seja válido
     * @param name configura o nome do usuário, caso seja válido
     * @param password configura a senha do usuário, caso seja válido
     * @param idiom configura o idioma do usuário, caso seja válido
     * @throw invalid_argument quando algum valor for invalido
     */
    User(Email, Name, Password, Idiom);

    /**
     * @brief construtor que recebe o email e a senha
     * @param email configura o email do usuário, caso seja válido
     * @param name configura o nome do usuário, caso seja válido
     * @param password configura a senha do usuário, caso seja válido
     * @param idiom configura o idioma do usuário, caso seja válido
     * @param date configura a data de aniversário do usuário, caso seja válido
     * @throw invalid_argument quando algum valor for invalido
     */
    User(Email, Name, Password, Idiom, Date);

    /**
     * @brief construtor que recebe o email e a senha
     * @param email configura o email do usuário, caso seja válido
     * @param name configura o nome do usuário, caso seja válido
     * @param password configura a senha do usuário, caso seja válido
     * @param idiom configura o idioma do usuário, caso seja válido
     * @param date configura a data de aniversário do usuário, caso seja válido
     * @param description configura a descrição do usuário, caso seja válido
     * @throw invalid_argument quando algum valor for invalido
     */
    User(Email, Name, Password, Idiom, Date, Description);

    /**
     * @brief atualiza o valor do nome do usuário
     *
     * @param name o novo nome a ser atualizado
     * @throw invalid_argument caso o valor não seja válido
     */
    void setName(string);

    /**
     * @brief retorna o nome do usuário
     *
     * @return string com o nome do usuário
     */
    string getName();

    /**
     * @brief atualiza o valor do email
     *
     * @param email o novo email do usuário
     * @throw invalid_argument caso o valor seja inválido
     */
    void setEmail(string);

    /**
     * @brief retorna o email do usuário
     *
     * @return string com o email do usuário
     */
    string getEmail();

    /**
     * @brief atualiza o valor da senha
     * @param password a nova senha do usuário
     * @throw invalid_argument caso o valor seja inválido
     */
    void setPassword(string);

    /**
     * @brief retorna a senha do usuário
     *
     * @return string com a senha do usuário
     */
    string getPassword();

    /**
     * @brief atualiza o valor do idioma
     * @param idiom o novo idioma do usuário
     * @throw invalid_argument caso o valor seja inválido
     */
    void setIdiom(string idiom);

    /**
     * @brief retorna o idioma do usuário
     *
     * @return string com o idioma do usuário
     */
    string getIdiom();

    /**
     * @brief atualiza o valor da data de aniversário
     * @param date a nova data de aniversário do usuário
     * @throw invalid_argument caso o valor seja inválido
     */
    void setDate(string date);

    /**
     * @brief retorna a data de aniversário do usuário
     *
     * @return string com a data de aniversário do usuário
     */
    string getDate();

    /**
     * @brief atualiza o valor da descrição
     * @param description a nova descrição do usuário
     * @throw invalid_argument caso o valor seja inválido
     */
    void setDescription(string description);

    /**
     * @brief retorna a descrição do usuário
     *
     * @return string com a descrição do usuário
     */
    string getDescription();
};

#endif // ENTITIES_USER_HPP_