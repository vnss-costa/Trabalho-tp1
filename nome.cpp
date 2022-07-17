#include "nome.h"

void Nome::validar(string nome) const{
    int tamanho_nome = nome.length();

    if (tamanho_nome > 30)
         throw invalid_argument("Tamanho Invalido");                                //confere tamanho

    for (int i; i < tamanho_nome; i++){
        if (isupper(nome[0]) != true)                                                //confere se a primeira letra do nome eh maiuscula
            throw invalid_argument("Pronome deve comecar com letra maiuscula");

        if ((isspace(nome[i]) && isspace(nome[i+1]))== true)                         //confere espaco duplo
            throw invalid_argument("Nao pode haver dois espacos");

        if (isspace(nome[i]) && isupper(nome[i+1])!= true)                           //confere se o sobrenome eh maiusculo
            throw invalid_argument("Sobrenome deve comecar com letra maiuscula");

        if ((isalpha(nome[i]) || isspace(nome[i]))!= true)                           //confere se tem entrada diferente de aspaco e letra
            throw invalid_argument("Entrada so pode conter epaco ou letra");

    }

}



Nome::Nome(string nome){
    validar(nome);
    this->nome = nome;
}

void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;
}



