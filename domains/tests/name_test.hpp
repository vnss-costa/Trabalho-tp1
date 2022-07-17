#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "../name.hpp"

using namespace std;

class TUNome {
private:
    const string VALOR_VALIDO = "Pedro Henrique Da Costa Vilari";
    const string VALOR_INVALIDO = "pedro Henrique Da Costa Vilari";
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TESTES_H_INCLUDED

