#ifndef ENTITIES_REVIEW_HPP_
#define ENTITIES_REVIEW_HPP_
#include "../domains/grade.hpp"
#include "../domains/code.hpp"
#include "../domains/description.hpp"
using namespace std;

/**
 * @brief Classe Review
 * @author Fernando Jorge - 200017829
 *
 * Entidade Review, que guarda a avaliação que um usuário fez de uma hospedagem
 */
class Review
{
private:
    Grade grade;
    Code code;
    Description description;

public:
    // Constructors
    /**
     * @brief construtor padrão da entidade avaliação
     */
    Review();

    /**
     * @brief Construtor que recebe o Codigo
     * @param code configura o valor do código da avaliação, caso seja válido
     * @throw invalid_argument quando algum valor for inválido
     */
    Review(Code);

    /**
     * @brief Construtor que recebe o Codigo
     * @param code configura o valor do código da avaliação, caso seja válido
     * @param grade   configura o valor da nota, caso seja válido
     * @throw invalid_argument quando algum valor for inválido
     */
    Review(Code, Grade);

    /**
     * @brief Construtor que recebe o Codigo
     * @param code configura o valor do código da avaliação, caso seja válido
     * @param description configura a descrição da avaliação, caso seja válido
     * @param grade   configura o valor da nota, caso seja válido
     * @throw invalid_argument quando algum valor for inválido
     */
    Review(Code, Grade, Description);

    // Get Methods
    /**
     * @brief retorna o código da avaliação
     *
     * @return string que tem o código da avaliação
     */
    string getCode();

    /**
     * @brief retorna a nota da avaliação
     *
     * @return unsigned int que tem a nota da avaliação
     */
    unsigned int getGrade();

    /**
     * @brief retorna a descrição da avaliação
     *
     * @return string com a descrição da avaliação
     */
    string getDescription();

    // Set Methods
    /**
     * @brief configura o código da avaliação, caso seja válido
     * @param code string com a descrição a ser aplicada a avaliação
     * @throw invalid_argument caso o valor seja inválido
     */
    void setCode(string);

    /**
     * @brief configura a nota da avaliação, caso seja válido
     *
     * @param nota int com a nota a ser aplicada
     * @throw invalid_argumet caso o valor seja inválido
     */
    void setGrade(unsigned int);

    /**
     * @brief configura a descrição da avaliação, caso seja válido
     *
     * @param description string com a descrição a ser aplicada
     * @throw invalid_argument caso o valor seja inválido
     */
    void setDescription(string);
};

#endif // ENTITIES_REVIEW_HPP_
