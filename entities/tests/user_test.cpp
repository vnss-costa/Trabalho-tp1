#include "user_test.hpp"
#include <iostream>
using namespace std;

int UserTest::run()
{
  create();

  test_validation_name_test_block("Bom Dia");
  test_invalidation_name_test_block("Bom  dia");

  test_validation_email_test_block("batata@batata");
  test_invalidation_email_test_block(".batata@batata");

  test_validation_password_test_block("AbaB12");
  test_invalidation_password_test_block("12345");

  test_validation_idiom_test_block("Brasileirense");
  test_invalidation_idiom_test_block("Hindi");

  test_validation_birthday_test_block("30/Fev");
  test_invalidation_birthday_test_block("12/Abr");

  test_invalidation_description_test_block("Descricao valida");
  test_validation_description_test_block("Descrição    inválida");

  destroy();

  return state;
}

void UserTest::create()
{
  user = new User();
  state = sucess;
}

void UserTest::destroy()
{
  delete user;
}

void UserTest::test_validation_email_test_block(string email)
{
  cout << "Testando Email válido" << endl;
  try
  {
    cout << "Email Testado: " << email << endl
         << endl;
    user->setEmail(email);
    cout << "Email aceito!" << endl;
    cout << "O Email atual é: " << user->getEmail() << endl;
  }
  catch (invalid_argument &message)
  {
    cout << "Email rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_invalidation_email_test_block(string email)
{
  cout << "Testando Email Inválido" << endl;
  try
  {
    cout << "Email Testado: " << email << endl
         << endl;
    user->setEmail(email);
    cout << "Email aceito!" << endl;
    cout << "O Email atual é: " << user->getEmail() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Email rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_validation_name_test_block(string name)
{
  cout << "Testando Nome válido" << endl;
  try
  {
    cout << "Nome Testado: " << name << endl
         << endl;
    user->setName(name);
    cout << "Nome aceito!" << endl;
    cout << "O Nome atual é: " << user->getName() << endl;
  }
  catch (invalid_argument &message)
  {
    cout << "Nome rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_invalidation_name_test_block(string name)
{
  cout << "Testando Nome Inválido" << endl;
  try
  {
    cout << "Nome Testado: " << name << endl
         << endl;
    user->setName(name);
    cout << "Nome aceito!" << endl;
    cout << "O Nome atual é: " << user->getName() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Nome rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_validation_password_test_block(string password)
{
  cout << "Testando senha válida" << endl;
  try
  {
    cout << "Senha Testada: " << password << endl
         << endl;
    user->setPassword(password);
    cout << "Senha aceita!" << endl;
    cout << "a Senha atual é: " << user->getPassword() << endl;
  }
  catch (invalid_argument &message)
  {
    cout << "Senha rejeitada!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_invalidation_password_test_block(string password)
{
  cout << "Testando senha Inválida" << endl;
  try
  {
    cout << "Senha Testada: " << password << endl
         << endl;
    user->setPassword(password);
    cout << "Senha aceita!" << endl;
    cout << "a Senha atual é: " << user->getPassword() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Senha rejeitada!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
  }
  cout << "\n==============================\n\n";
}