#ifndef DOMAINS_TESTS_GRADE_TEST_HPP_
#define DOMAINS_TESTS_GRADE_TEST_HPP_

#include "../grade.hpp"

using namespace std;

/**
 * @brief Classe que testa o domínio "grade"
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */
class GradeTest
{
private:
  const static int VALOR_VALIDO = 5;
  const static int VALOR_INVALIDO = 20;
  Grade *grade;
  int estado;
  void create();
  void destroy();
  void test_validation();
  void test_invalidation();

public:
  const static int success = 0;
  const static int failure = -1;
  int run();
};

#endif // DOMAINS_TESTS_GRADE_TEST_HPP_
