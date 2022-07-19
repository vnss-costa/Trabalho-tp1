#include "code.hpp"
#include <string>

void Code::isValid(string code) const
{
    int SIZE = code.length();
    if (SIZE != CODE_SIZE)
        throw invalid_argument("Tamanho Incorreto");

    for (int i; i < SIZE; i++)
    {

        if (isdigit(code[i]) != true)
            throw invalid_argument("Por favor, entre com um c�digo num�rico");
    }
    int sum_digito, digito_verificador;
    sum_digito = (code[0] - '0') + (code[1] - '0') + (code[2] - '0') + (code[3] - '0') + (code[4] - '0') +
                 (code[5] - '0') + (code[6] - '0') + (code[7] - '0') + (code[8] - '0') + (code[9] - '0');

    digito_verificador = (code[VERIFYING_DIGIT_POSITION] - '0');

    if ((sum_digito % 10) != digito_verificador)
        throw invalid_argument("Digito verificador inv�lido");
}

Code::Code(string code)
{
    isValid(code);
    this->code = code;
}
