#include <iostream>
#include "nome.h"
#include "nome_teste.h"

using namespace std;

int main()
{
    Nome a("Pedro Henrique Da Costa Vilarins");   //confere o tamanho
    //Nome a("pedro Henrique Da Costa Vilari");   //confere se a primeira letra do nome eh maiuscula
    //Nome a("Pedro henrique Da Costa Vilari");   //confere se o sobrenome eh maiusculo
    //Nome a("P3dro Henrique Da Costa Vilari");   //confere se tem entrada diferente de aspaco e letra
    //Nome a("Pedro  Henrique Da Costa Vilar");   //confere espaco duplo

    cout << a.getNome() << endl;

    return 0;
}
