#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "../idiom.hpp"

using namespace std;

class TUIdioma {
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
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TESTES_H_INCLUDED