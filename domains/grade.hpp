#ifndef DOMAINS_GRADE_HPP_
#define DOMAINS_GRADE_HPP_

#include <stdexcept>

using namespace std;

/**
 * @brief Classe para o domínio Nota
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
    Grade(int);
    void setGrade(int);
    int getGrade() const;
};

inline int Grade::getGrade() const
{
    return grade;
}

#endif // DOMAINS_GRADE_HPP_
