#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "../code.hpp"

using namespace std;

class TUCodigo
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

#endif // TESTES_H_INCLUDED
