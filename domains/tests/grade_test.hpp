#ifndef DOMAINS_TESTS_GRADE_TEST_HPP_
#define DOMAINS_TESTS_GRADE_TEST_HPP_

#include "../grade.hpp"

using namespace std;

class GradeTest
{
private:
  const static int VALOR_VALIDO = 5;
  const static int VALOR_INVALIDO = 20;
  Grade *grade;
  int estado;
  void setUp();
  void tearDown();
  void testarCenarioSucesso();
  void testarCenarioFalha();

public:
  const static int SUCESSO = 0;
  const static int FALHA = -1;
  int run();
};

#endif // DOMAINS_TESTS_GRADE_TEST_HPP_
