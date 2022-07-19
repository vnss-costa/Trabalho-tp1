#ifndef DOMAINS_TESTS_DATE_TEST_HPP_
#define DOMAINS_TESTS_DATE_TEST_HPP_

#include <string>
#include "../date.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio "date"
 *
 * @author Fernando Jorge - 200017829
 */
class DateTest
{
private:
    inline static const int success = 0;
    inline static const int failure = 1;

    int result;

    Date *date;

    void destroy();
    void create();
    void test_validation(string date);
    void test_invalidation(string date);

public:
    int run();
};

#endif // DOMAINS_TESTS_DATE_TEST_HPP_
