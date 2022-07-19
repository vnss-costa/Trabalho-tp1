#include "review_test.hpp"
#include <iostream>
using namespace std;

int ReviewTest::run()
{
  create();

  test_validation_code_test_block("0001235");
  test_invalidation_code_test_block("0000000");

  test_validation_grade_test_block(1);
  test_invalidation_grade_test_block(6);

  test_validation_description_test_block("Teste de descrição");
  test_invalidation_description_test_block("Teste  de    descrição");

  destroy();

  return state;
}

void ReviewTest::create()
{
  review = new Review();
  state = success;
}

void ReviewTest::destroy()
{
  delete review;
}

void ReviewTest::test_validation_description_test_block(string value)
{
  cout << "Testando valor válido" << endl;
  try
  {
    cout << "Descrição testada: " << value << endl
         << endl;
    review->setDescription(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << review->getDescription() << endl;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void ReviewTest::test_invalidation_description_test_block(string value)
{
  cout << "Testando valor inválido" << endl;
  try
  {
    cout << "Descrição testada: " << value << endl
         << endl;
    review->setDescription(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << review->getDescription() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
  }
  cout << "\n==============================\n\n";
}

void ReviewTest::test_validation_code_test_block(string value)
{
  cout << "Testando valor válido" << endl;
  try
  {
    cout << "Codigo testado: " << value << endl
         << endl;
    review->setCode(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << review->getCode() << endl;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void ReviewTest::test_invalidation_code_test_block(string value)
{
  cout << "Testando valor inválido" << endl;
  try
  {
    cout << "Codigo testado: " << value << endl
         << endl;
    review->setCode(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << review->getCode() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
  }
  cout << "\n==============================\n\n";
}

void ReviewTest::test_validation_grade_test_block(unsigned int value)
{
  cout << "Testando valor válido" << endl;
  try
  {
    cout << "Nota testada: " << value << endl
         << endl;
    review->setGrade(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << review->getGrade() << endl;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void ReviewTest::test_invalidation_grade_test_block(unsigned int value)
{
  cout << "Testando valor inválido" << endl;
  try
  {
    cout << "Nota testada: " << value << endl
         << endl;
    review->setGrade(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << review->getGrade() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
  }
  cout << "\n==============================\n\n";
}
