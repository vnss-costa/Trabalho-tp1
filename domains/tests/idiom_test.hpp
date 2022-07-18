#ifndef DOMAINS_TESTS_IDIOM_TEST_HPP_
#define DOMAINS_TESTS_IDIOM_TEST_HPP_

#include "../idiom.hpp"

using namespace std;

class IdiomTest
{
private:
    const string VALOR_VALIDO = "Ingles";
    const string VALOR_INVALIDO = "Japones";
    Idioma *idioma;
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

#endif //  DOMAINS_TESTS_IDIOM_TEST_HPP_
