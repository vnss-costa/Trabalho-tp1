#ifndef DOMAINS_TESTS_IDIOM_TEST_HPP_
#define DOMAINS_TESTS_IDIOM_TEST_HPP_

#include "../idiom.hpp"

using namespace std;

/**
 * @brief Classe que testa o domínio "idiom"
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */
class IdiomTest
{
private:
    const string VALOR_VALIDO = "Ingles";
    const string VALOR_INVALIDO = "Japones";
    Idiom *idiom;
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

#endif //  DOMAINS_TESTS_IDIOM_TEST_HPP_
