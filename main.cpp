#include <iostream>
#include "nome.h"
#include "nome_teste.h"

using namespace std;

int main()
{
    TUNome teste;

    switch(teste.run()){
        case TUNome::SUCESSO: cout << "Sucesso no teste do codigo (nome)" << endl;
                                break;
        case TUNome::FALHA  : cout << "Falha ao testar o codigo (nome)" << endl;
                                break;
    }

    return 0;
}
