#ifndef DOMAINS_TESTS_CODE_TEST_HPP_
#define DOMAINS_TESTS_CODE_TEST_HPP_

#include "../code.hpp"

using namespace std;

class CodeTest
{
private:
    const string VALOR_VALIDO = "12345678905";
    const string VALOR_INVALIDO = "12345678907";
    Codigo *codigo;
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

#endif // DOMAINS_TESTS_CODE_TEST_HPP_
