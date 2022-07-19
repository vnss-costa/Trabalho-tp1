#include <string>
#include <iostream>
#include "name_test.hpp"
using namespace std;

/**
 * @brief implementa��o do teste de unidade da classe name
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

void NameTest::create()
{
  name = new Name("Pedro Henrique");
  estado = success;
}

void NameTest::destroy()
{
  delete name;
}

void NameTest::test_validation()
{
  cout << "Espera-se que aceite a entrada" << endl;
  try
  {
    cout << "Nome testado: " << VALOR_VALIDO << endl
         << endl;
    name->setName(VALOR_VALIDO);
    if (name->getName() != VALOR_VALIDO)
      estado = failure;
    else
      cout << "Nome aceito!" << endl;
  }
  catch (invalid_argument &message)
  {
    cout << "Nome rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    estado = failure;
  }
  cout << "\n================================\n";
}

void NameTest::test_invalidation()
{
  cout << "Espera-se que rejeite a entrada" << endl;
  try
  {
    cout << "Nome testado: " << VALOR_INVALIDO << endl
         << endl;
    name->setName(VALOR_INVALIDO);
    cout << "Nome aceito!" << endl;
    estado = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Nome rejeitado!" << endl;
    cout << "Erro: " << message.what() << endl;
    if (name->getName() == VALOR_INVALIDO)
      estado = failure;
  }
  cout << "\n================================\n";
}
int NameTest::run()
{
  create();
  test_validation();
  test_invalidation();
  destroy();
  return estado;
}
