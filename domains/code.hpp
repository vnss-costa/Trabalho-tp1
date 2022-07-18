#ifndef DOMAINS_CODE_HPP_
#define DOMAINS_CODE_HPP_

#include <stdexcept>

using namespace std;

/**
 * @brief Classe para o domínio código
 *
 * @author Pedro Henrique Da Costa Vilarins - 180114441
 */

class Codigo
{
private:
    static const int TAMANHO_CODIGO = 11;
    static const int POSICAO_DIGITO_VERIFICADOR = 10; // usa o posicionamento do ultimo digito
    string codigo;
    void validar(string) const;

public:
    Codigo(string);
    void setCodigo(string);
    string getCodigo() const;
};

inline string Codigo::getCodigo() const
{
    return codigo;
}

#endif // DOMAINS_CODE_HPP_
