#include "idiom.hpp"

//percore uma string com 10 itens, para conferir se eh igual
void Idioma::validar(string idioma) const{
    for(int i = 0;i < 10;i++)
        if (IDIOMAS_VALIDOS[i] == idioma)
            return;
    throw invalid_argument("Idioma Inv�lido");
}

Idioma::Idioma(string idioma){
    validar(idioma);
    this->idioma = idioma;
}

void Idioma::setIdioma(string idioma){
    validar(idioma);
    this->idioma = idioma;
}


