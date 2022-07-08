#include <iostream>
#include "idioma.h"
#include "idioma_teste.h"

using namespace std;

int main()
{
    TUIdioma testeA;

    switch(testeA.run()){
        case TUIdioma::SUCESSO: cout << "Sucesso no teste do codigo (idioma)" << endl;
                                break;
        case TUIdioma::FALHA  : cout << "Falha ao testar o codigo (idioma)" << endl;
                                break;
    }
    return 0;
}
