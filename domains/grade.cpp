#include "grade.hpp"

// Valida a nota entre 0 e 10
void Grade::validar(int grade) const
{
    if (grade < MIN || grade > MAX)
        throw invalid_argument("Argumento invalido.");
}

Grade::Grade(int grade)
{
    validar(grade);
    this->grade = grade;
}

void Grade::setGrade(int grade)
{
    validar(grade);
    this->grade = grade;
}
