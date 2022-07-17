#ifndef CITY
#define CITY
#include <string>

using namespace std;


/**
 * @brief Classe do domínio Cidade
 * 
 * @author Vanessa Paixão - 200028286
 */

 class City {
     private:
        inline static const string cities[20] = 
        {
            "Antalya",
            "Bangkok",
            "Delhi",
            "Dubai",
            "Hong Kong",
            "Londres",
            "Macau",
            "Mumbai",
            "Paris",
            "Rio de Janeiro",
            "São Paulo",
            "Seul",
            "Istambul",
            "Kuala Lumpur",
            "Nova Iorque",
            "Osaka",
            "Phuket",
            "Shenzhen",
            "Toquio"
        };
        string city;
        void isValid(string city);
    public:

        City();

        City(string city);

        string getCity();

        void setCity(string city); 
 };

 inline string City::getCity()
 {
     return city;
 }

 inline void City::setCity(string city)
 {
     isValid(city);
     this->city = city;
 }

 inline City::City() {};

 #endif