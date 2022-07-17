#include "grade.hpp"

//Valida a nota entre 0 e 10
void Nota::validar(int nota) const{
    if (nota < MIN || nota > MAX)
        throw invalid_argument("Argumento invalido.");
}

Nota::Nota(int nota){
    validar(nota);
    this->nota = nota;
}

void Nota::setNota(int nota){
    validar(nota);
    this->nota = nota;
}
