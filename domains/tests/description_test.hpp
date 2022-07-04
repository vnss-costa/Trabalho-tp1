#include <string>
#include "../../domains/description.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio "description"
 *
 * @author Fernando Jorge - 200017829
 */
class DescriptionTest
{
    private:
        inline static const int success = 0;
        inline static const int failure = 1;

        int result;

        Description *description;

        void destroy();
        void create();
        void test_validation(string description);
        void test_invalidation(string description);

    public:
        int run();
};
