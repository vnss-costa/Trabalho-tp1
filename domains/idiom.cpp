#include "idiom.hpp"

//percore uma string com 10 itens, para conferir se eh igual
void Idiom::isValid(string idiom) const{
    for(int i = 0;i < 10;i++)
        if (IDIOMAS_VALIDOS[i] == idiom)
            return;
    throw invalid_argument("Idioma Inv�lido");
}

Idiom::Idiom(string idiom){
    isValid(idiom);
    this->idiom = idiom;
}
