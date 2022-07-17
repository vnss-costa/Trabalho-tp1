#ifndef CITY
#define CITY
#include <string>
#include <iostream>


/**
 * @brief Classe do domínio Idioma
 * 
 * @author Vanessa Paixão - 200028286
 */

 class City {
     private:
        inline static const cities[20] = 
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
        }
        string city;
        void validate(string city);
     public:

     City();

     City(string city);

     string getCity();

     void setName(string city); 
 };

 inline string City::getCity()
 {
     return city;
 }

 inline void City::setName(string city)
 {
     isValid(city);
     this->city = city;
 }

 inline City::city() {};

 #endif