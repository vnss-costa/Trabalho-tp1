#include <iostream>
#include "codigo.h"
#include "codigo_teste.h"

using namespace std;

int main()
{
    TUCodigo teste;

    switch(teste.run()){
        case TUCodigo::SUCESSO: cout << "Sucesso no teste do codigo (codigo)" << endl;
        break;
        case TUCodigo::FALHA  : cout << "Falha ao testar o codigo (codigo)" << endl;
        break;
    }
    return 0;
}

//int temp = (int) codigo[i] - 48; //transforma o char 'num' para int num
