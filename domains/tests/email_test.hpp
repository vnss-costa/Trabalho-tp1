#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "../email.hpp"

using namespace std;

class TUEmail {
private:
    const string VALOR_VALIDO = "pedrovilarins077@gmail.com";
    const string VALOR_INVALIDO = "pedrovilarins0777gmail.com";
    Email *email;
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
