#ifndef DOMAINS_TESTS_PASSWORD_TEST_HPP_
#define DOMAINS_TESTS_PASSWORD_TEST_HPP_

#include <string>
#include "../password.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio senha
 *
 * @author Fernando Jorge - 200017829
 */
class PasswordTest
{
private:
    inline static const int success = 0;
    inline static const int failure = 1;

    int result;

    Password *password;

    void destroy();
    void create();
    void test_validation(string password);
    void test_invalidation(string password);

public:
    int run();
};

#endif //  DOMAINS_TESTS_PASSWORD_TEST_HPP_
