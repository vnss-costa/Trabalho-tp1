#ifndef DOMAINS_TESTS_NAME_TEST_HPP_
#define DOMAINS_TESTS_NAME_TEST_HPP_

#include <string>
#include "../../domains/name.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio nome
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */
class NameTest
{
private:
    inline static const int success = 0;
    inline static const int failure = 1;

    const string VALOR_VALIDO = "Pedro Henrique Da Costa Vilari";
    const string VALOR_INVALIDO = "pedro Henrique Da Costa Vilari";

    int result;

    Name *name;

    void destroy();
    void create();
    void test_validation();
    void test_invalidation();

public:
    int run();
};

#endif // DOMAINS_TESTS_NAME_TEST_HPP_
