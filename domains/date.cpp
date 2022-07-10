#include "date.hpp"
#include <string>
#include <iostream>
using namespace std;

Date::Date(string date)
{
    isValid(date);
    setDate(date);
}

void Date::isValid(string date)
{
    string value = date;
    int position = date.find("/");
    
    string strDay = date.substr(0, 2);
    int numDay = stoi(strDay);
    string month = date.substr(position + 1, -1);

    int size = value.size();
    int dateSize = date.size();
    int monthSize = month.size();

    bool hasLower = false, hasUpper = false;

    if (size != 6)
        throw invalid_argument("A data deve seguir o formato DD/Mes (as 3 primeiras letras do mes)");

    for (int i = 0; i < 2; i++)
        if (!isdigit(date[i]))
            throw invalid_argument("Os dias na data devem ser números");
        if (numDay < 1 || numDay > 31)
           throw invalid_argument("O dia deve ser um número entre 1 e 31");

    for (int i = 0; i < monthSize; i++)
        if (islower(month[0]) || isupper(month[1]) || isupper(month[2]))
            throw invalid_argument("Verifique se seu mês nâo segue o formato 'Mes' com 3 letras e apenas a primeira maiúscula");
        else if (isupper(month[i]) && !(month[i] == month[0]))
            throw invalid_argument("As outras letras se não as primeiras devem ser minúsculas");


    if (month == "Fev" || month == "Abr" || month == "Jun" || month == "Set" || month == "Nov" )
        if (numDay == 31)
            throw invalid_argument("O mês informado não tem 31 dias");
 
    for (int i = 0; i < 12; i++)
        if (dates[i] == month)
            return;

    throw invalid_argument("O mês informado não é válido");
}
