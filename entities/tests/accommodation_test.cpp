#include "accommodation_test.hpp"
#include <iostream>
using namespace std;

void AccommodationTest::create()
{
  obj = new Accommodation();
  state = success;
}

void AccommodationTest::destroy()
{
  delete obj;
}

int AccommodationTest::run()
{
  create();

  test_validation_code_test("12345678905");
  test_invalidation_code_test("0");

  test_validation_city_test("Hong Kong");
  test_invalidation_city_test("São Francisco de Minas");

  test_validation_country_test("Emirados");
  test_invalidation_country_test("Nepal");

  test_validation_grade_test(0);
  test_invalidation_grade_test(11);

  test_validation_description_test("Um lugar bonito");
  test_invalidation_description_test("..");

  destroy();

  return state;
}

void AccommodationTest::test_validation_code_test(string value)
{
  cout << "Testando valor válido" << endl;
  try
  {
    cout << "Codigo testado: " << value << endl
         << endl;
    obj->setCode(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getCode() << endl;
    state = success;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void AccommodationTest::test_invalidation_code_test(string value)
{
  cout << "Testando valor inválido" << endl;
  try
  {
    cout << "Codigo testado: " << value << endl
         << endl;
    obj->setCode(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getCode() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = success;
  }
  cout << "\n==============================\n\n";
}

void AccommodationTest::test_validation_city_test(string value)
{
  cout << "Testando valor válido" << endl;
  try
  {
    cout << "Cidade testada: " << value << endl
         << endl;
    obj->setCity(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getCity() << endl;
    state = success;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void AccommodationTest::test_invalidation_city_test(string value)
{
  cout << "Testando valor inválido" << endl;
  try
  {
    cout << "Cidade testado: " << value << endl
         << endl;
    obj->setCity(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getCity() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = success;
  }
  cout << "\n==============================\n\n";
}

void AccommodationTest::test_validation_country_test(string value)
{
  cout << "Testando valor válido" << endl;
  try
  {
    cout << "País testada: " << value << endl
         << endl;
    obj->setCountry(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getCountry() << endl;
    state = success;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void AccommodationTest::test_invalidation_country_test(string value)
{
  cout << "Testando valor inválido" << endl;
  try
  {
    cout << "País testado: " << value << endl
         << endl;
    obj->setCountry(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getCountry() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = success;
  }
  cout << "\n==============================\n\n";
}

void AccommodationTest::test_validation_grade_test(unsigned int value)
{
  cout << "Testando valor válido" << endl;
  try
  {
    cout << "País testada: " << value << endl
         << endl;
    obj->setGrade(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getGrade() << endl;
    state = success;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void AccommodationTest::test_invalidation_grade_test(unsigned int value)
{
  cout << "Testando valor inválido" << endl;
  try
  {
    cout << "País testado: " << value << endl
         << endl;
    obj->setGrade(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getGrade() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = success;
  }
  cout << "\n==============================\n\n";
}


void AccommodationTest::test_validation_description_test(string value)
{
  cout << "Testando valor válido" << endl;
  try
  {
    cout << "Descrição testada: " << value << endl
         << endl;
    obj->setDescription(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getDescription() << endl;
    state = success;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void AccommodationTest::test_invalidation_description_test(string value)
{
  cout << "Testando valor inválido" << endl;
  try
  {
    cout << "Descrição testada: " << value << endl
         << endl;
    obj->setDescription(value);
    cout << "Valor aceito!" << endl;
    cout << "O valor atual é: " << obj->getDescription() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Valor rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = success;
  }
  cout << "\n==============================\n\n";
}
