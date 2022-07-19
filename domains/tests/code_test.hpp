#ifndef DOMAINS_TESTS_CODE_TEST_HPP_
#define DOMAINS_TESTS_CODE_TEST_HPP_

#include "../code.hpp"

using namespace std;

/**
 * @brief Classe que testa o domínio "code"
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

class CodeTest
{
private:
    const string VALOR_VALIDO = "12345678905";
    const string VALOR_INVALIDO = "12345678907";
    Code *code;
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

#endif // DOMAINS_TESTS_CODE_TEST_HPP_
