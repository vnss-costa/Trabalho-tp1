#ifndef DOMAINS_GRADE_HPP_
#define DOMAINS_GRADE_HPP_
#include <stdexcept>

using namespace std;

/**
 * @brief Classe para o domínio nota
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */
class Grade
{
private:
    static const int MIN = 0;
    static const int MAX = 10;
    int grade;
    void isValid(int) const;

public:
    /**
     * @brief Método construtor da Nota
     */
    Grade();

    /**
     * @brief Construtor que seleciona a nota informada
     *
     * @param grade é a nota que se deseja inserir
     * @throw invalid_argument caso não seja um nota válida
     */
    Grade(int grade);

    /**
     * @brief Configura a nota para o valor inserido
     *
     * @param grade com a nota
     * @throw invalid_agument caso o valor seja inválido
     */

    void setGrade(int grade);

    /**
     * @brief Retorna qual a nota armazenada no objeto
     *
     * @return int com a nota
     */
    int getGrade();
};

inline int Grade::getGrade()
{
    return grade;
}

inline void Grade::setGrade(int grade)
{
    isValid(grade);
    this->grade = grade;
}

inline Grade::Grade(){};

#endif // DOMAINS_GRADE_HPP_
