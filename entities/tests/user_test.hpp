#ifndef ENTITIES_TESTS_USER_TEST_HPP_
#define ENTITIES_TESTS_USER_TEST_HPP_
#include "../user.hpp"
using namespace std;

/**
 * @author Fernando Jorge - 200017829
 */

class UserTest
{
private:
  inline static const int sucess = 0;
  inline static const int failure = 1;
  int state;
  User *user;

  void create();
  void destroy();

  void test_validation_email_test_block(string);
  void test_invalidation_email_test_block(string);

  void test_validation_name_test_block(string);
  void test_invalidation_name_test_block(string);

  void test_validation_password_test_block(string);
  void test_invalidation_password_test_block(string);

  void test_validation_idiom_test_block(string);
  void test_invalidation_idiom_test_block(string);

  void test_validation_birthday_test_block(string);
  void test_invalidation_birthday_test_block(string);

  void test_validation_description_test_block(string);
  void test_invalidation_description_test_block(string);

public:
  int run();
};

#endif // ENTITIES_TESTS_USER_TEST_HPP_