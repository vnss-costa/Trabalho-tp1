#ifndef DOMAINS_TESTS_NAME_TEST_HPP_
#define DOMAINS_TESTS_NAME_TEST_HPP_

#include <string>
#include "../name.hpp"
using namespace std;

/**
 * @brief Documenta��o Teste De Unidade da Classe name
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

class NameTest {
private:
    const string VALOR_VALIDO = "Pedro Henrique Da Costa Vilari";
    const string VALOR_INVALIDO = "pedro Henrique Da Costa Vilari";
    Name *name;
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

#endif // DOMAINS_TESTS_NAME_TEST_HPP_
