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

  test_validation_description_test_block("Descricao valida");
  test_invalidation_description_test_block("Descrição    inválida");

  destroy();

  return state;
}

void UserTest::create()
{
  user = new User();
  state = success;
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
    state = success;
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
    state = success;
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
    state = success;
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
    state = success;
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
    state = success;
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
  cout << "Testando senha inválida" << endl;
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
    state = success;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_validation_idiom_test_block(string idiom)
{
  cout << "Testando idioma válido" << endl;
  try
  {
    cout << "idioma Testado: " << idiom << endl
         << endl;
    user->setPassword(idiom);
    cout << "idioma aceito!" << endl;
    cout << "o idioma atual é: " << user->getPassword() << endl;
    state = success;
  }
  catch (invalid_argument &message)
  {
    cout << "idioma rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_invalidation_idiom_test_block(string idiom)
{
  cout << "Testando idioma Inválido" << endl;
  try
  {
    cout << "idioma Testado: " << idiom << endl
         << endl;
    user->setPassword(idiom);
    cout << "idioma aceito!" << endl;
    cout << "o idioma atual é: " << user->getPassword() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "idioma rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = success;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_validation_birthday_test_block(string birthday)
{
  cout << "Testando data válida" << endl;
  try
  {
    cout << "Aniversário Testado: " << birthday << endl
         << endl;
    user->setDate(birthday);
    cout << "Aniversário aceito!" << endl;
    cout << "O aniversário atual é: " << user->getDate() << endl;
    state = success;
  }
  catch (invalid_argument &message)
  {
    cout << "Aniversário rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_invalidation_birthday_test_block(string birthday)
{
  cout << "Testando data inválida" << endl;
  try
  {
    cout << "Aniversário Testado: " << birthday << endl
         << endl;
    user->setDate(birthday);
    cout << "Aniversário aceito!" << endl;
    cout << "O aniversário atual é: " << user->getDate() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Aniversário rejeitado!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = success;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_validation_description_test_block(string description)
{
  cout << "Testando descrição válida" << endl;
  try
  {
    cout << "Descrição Testada: " << description << endl
         << endl;
    user->setPassword(description);
    cout << "Descrição aceita!" << endl;
    cout << "A descrição atual é: " << user->getPassword() << endl;
    state = success;
  }
  catch (invalid_argument &message)
  {
    cout << "Descrição rejeitada!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = failure;
  }
  cout << "\n==============================\n\n";
}

void UserTest::test_invalidation_description_test_block(string description)
{
  cout << "Testando descrição inválida" << endl;
  try
  {
    cout << "Descrição Testada: " << description << endl
         << endl;
    user->setPassword(description);
    cout << "Descrição aceita!" << endl;
    cout << "A descrição atual é: " << user->getPassword() << endl;
    state = failure;
  }
  catch (invalid_argument &message)
  {
    cout << "Descrição rejeitada!" << endl;
    cout << "Mensagem de erro: " << message.what() << endl;
    state = success;
  }
  cout << "\n==============================\n\n";
}