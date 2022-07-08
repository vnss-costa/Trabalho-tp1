#include <iostream>
#include "idioma.h"
#include "idioma_teste.h"

using namespace std;

int main()
{
    TUIdioma testeA;

    switch(testeA.run()){
        case TUIdioma::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUIdioma::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }
    return 0;
}
