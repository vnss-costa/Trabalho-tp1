#ifndef DOMAINS_DATE_HPP_
#define DOMAINS_DATE_HPP_
#include <string>
using namespace std;

/**
 * @brief Classe para o domínio data
 *
 * @author Fernando Jorge - 200017829
 */
class Date
{
private:
    string date;

    inline static const string dates[12] =
        {
            "Jan",
            "Fev",
            "Mar",
            "Abr",
            "Mai",
            "Jun",
            "Jul",
            "Ago",
            "Set",
            "Out",
            "Nov",
            "Dez"};

    void isValid(string date);

public:
    /**
     * @brief Método construtor da data
     */
    Date();

    /**
     * @brief Construtor que seleciona a data informado
     *
     * @param date é a data escolhida
     * @throw invalid_argument caso não seja um país válida
     */
    Date(string date);

    /**
     * @brief Retorna qual a data armazenada
     *
     * @return string com o valor da data
     */
    string getDate();

    /**
     * @brief Configura o valor da data para o inserido
     *
     * @param date com a data a ser inserida
     * @throw invalid_agument caso o valor seja inválido
     */
    void setDate(string date);
};

inline string Date::getDate()
{
    return date;
}

inline void Date::setDate(string date)
{
    isValid(date);
    this->date = date;
}

inline Date::Date(){};

#endif // DOMAINS_DATE_HPP_
