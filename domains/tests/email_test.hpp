#ifndef DOMAINS_TESTS_EMAIL_TEST_HPP_
#define DOMAINS_TESTS_EMAIL_TEST_HPP_

#include "../email.hpp"

using namespace std;

/**
 * @brief Classe que testa o domínio "code"
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */
class EmailTest
{
private:
    const string VALOR_VALIDO = "pedrovilarins077@gmail.com";
    const string VALOR_INVALIDO = "pedrovilarins0777gmail.com";
    Email *email;
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

#endif //  DOMAINS_TESTS_EMAIL_TEST_HPP_
