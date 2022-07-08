#include <iostream>
#include "email.h"
#include "email_teste.h"

using namespace std;

int main()
{

    TUEmail teste;

    switch(teste.run()){
        case TUEmail::SUCESSO: cout << "Sucesso no teste do codigo (email)" << endl;
        break;
        case TUEmail::FALHA  : cout << "Falha ao testar o codigo nota (email)" << endl;
        break;
    }
    //Email a("pedrovilarins077@gmail.com");

    //cout << "Valor = " << a.getEmail() << endl;
    return 0;
}
