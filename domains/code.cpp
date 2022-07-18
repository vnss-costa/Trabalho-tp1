#include "code.hpp"
#include <string>

void Codigo::validar(string codigo) const
{
    if (codigo.length() != TAMANHO_CODIGO)
        throw invalid_argument("Tamanho Incorreto");

    for (int i; i < codigo.length(); i++)
    {

        if (isdigit(codigo[i]) != true)
            throw invalid_argument("Por favor, entre com um c�digo num�rico");
    }
    int sum_digito, digito_verificador;
    sum_digito = (codigo[0] - '0') + (codigo[1] - '0') + (codigo[2] - '0') + (codigo[3] - '0') + (codigo[4] - '0') +
                 (codigo[5] - '0') + (codigo[6] - '0') + (codigo[7] - '0') + (codigo[8] - '0') + (codigo[9] - '0');

    digito_verificador = (codigo[POSICAO_DIGITO_VERIFICADOR] - '0');

    if ((sum_digito % 10) != digito_verificador)
        throw invalid_argument("Digito verificador inv�lido");
}

Codigo::Codigo(string codigo)
{
    validar(codigo);
    this->codigo = codigo;
}

void Codigo::setCodigo(string codigo)
{
    validar(codigo);
    this->codigo = codigo;
}