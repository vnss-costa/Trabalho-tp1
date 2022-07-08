#include <iostream>
#include "codigo.h"

using namespace std;

int main()
{
    Codigo a("12345678907");
    cout << a.getCodigo() << endl;
    return 0;
}
//int temp = (int) codigo[i] - 48; //transforma o char 'num' para int num
