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

void GradeTest::setUp()
{
  grade = new Grade(0);
  estado = SUCESSO;
}

void GradeTest::tearDown()
{
  delete grade;
}

void GradeTest::testarCenarioSucesso()
{
  cout << "Espera-se que aceite a entrada" << endl;
  try
  {
    cout << "Nota testada: " << VALOR_VALIDO << endl
         << endl;
    grade->setGrade(VALOR_VALIDO);
    if (grade->getGrade() != VALOR_VALIDO)
      estado = FALHA;
    else
      cout << "Nota aceita!" << endl;
  }
  catch (invalid_argument &message)
  {
    cout << "Nota rejeitada!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    estado = FALHA;
  }
  cout << "\n================================\n";
}

void GradeTest::testarCenarioFalha()
{
  cout << "Espera-se que rejeite a entrada" << endl;
  try
  {
    cout << "Nota testada: " << VALOR_INVALIDO << endl
         << endl;
    grade->setGrade(VALOR_INVALIDO);
    cout << "Nota aceita! (Inesperado)" << endl;
    estado = FALHA;
  }
  catch (invalid_argument &message)
  {
    cout << "Nota rejeitada!" << endl;
    cout << "Erro: " << message.what() << endl;
    if (grade->getGrade() == VALOR_INVALIDO)
      estado = FALHA;
  }
  cout << "\n================================\n";
}
int GradeTest::run()
{
  setUp();
  testarCenarioSucesso();
  testarCenarioFalha();
  tearDown();
  return estado;
}