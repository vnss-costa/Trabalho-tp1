#ifndef DOMAINS_TESTS_COUNTRY_TEST_HPP_
#define DOMAINS_TESTS_COUNTRY_TEST_HPP_

#include <string>
#include "../country.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio "country"
 *
 * @author Fernando Jorge - 200017829
 */
class CountryTest
{
private:
    inline static const int success = 0;
    inline static const int failure = 1;

    int result;

    Country *country;

    void destroy();
    void create();
    void test_validation(string country);
    void test_invalidation(string country);

public:
    int run();
};

#endif // DOMAINS_TESTS_COUNTRY_TEST_HPP_
