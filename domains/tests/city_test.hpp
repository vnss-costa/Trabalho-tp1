#include <sting>
#include "../city.hpp"

using namespace std;

/**
 * @brief Classe que testa o domínio "city"
 *
 * @author Vanessa Paixão - 200028286
 *
 */

 class CityTest
 {
     private:
        inline static const int success = 0;
        inline static const int failure = 1;

        int result

        City *city;

        void destroy();
        void create();
        void test_validation(string city);
        void test_invalidation(string city);
     
     public:
        int run();
 };