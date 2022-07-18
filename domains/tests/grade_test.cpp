#include <string>
#include <iostream>
#include "grade_test.hpp"
using namespace std;

/**
 * @brief implementa��o do teste de unidade da classe nota
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

// Muda o valor "Nota(valor)" para testar nota

void GradeTest::create()
{
  grade = new Grade(0);
  estado = success;
}

void GradeTest::destroy()
{
  delete grade;
}

void GradeTest::test_validation()
{
  cout << "Espera-se que aceite a entrada" << endl;
  try
  {
    cout << "Nota testada: " << VALOR_VALIDO << endl
         << endl;
    grade->setGrade(VALOR_VALIDO);
    if (grade->getGrade() != VALOR_VALIDO)
      estado = failure;
    else
      cout << "Nota aceita!" << endl;
  }
  catch (invalid_argument &message)
  {
    cout << "Nota rejeitada!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    estado = failure;
  }
  cout << "\n================================\n";
}

void GradeTest::test_invalidation()
{
  cout << "Espera-se que rejeite a entrada" << endl;
  try
  {
    cout << "Nota testada: " << VALOR_INVALIDO << endl
         << endl;
    grade->setGrade(VALOR_INVALIDO);
    cout << "Nota aceita! (Inesperado)" << endl;
    estado = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Nota rejeitada!" << endl;
    cout << "Erro: " << message.what() << endl;
    if (grade->getGrade() == VALOR_INVALIDO)
      estado = failure;
  }
  cout << "\n================================\n";
}
int GradeTest::run()
{
  create();
  test_validation();
  test_invalidation();
  destroy();
  return estado;
}
