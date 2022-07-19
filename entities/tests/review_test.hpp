#ifndef ENTITIES_TESTS_REVIEW_TEST_HPP_
#define ENTITIES_TESTS_REVIEW_TEST_HPP_
#include "../review.hpp"
using namespace std;

/**
 * @author Fernando Jorge - 200017829
 */

class ReviewTest
{
private:
  inline static const int success = 0;
  inline static const int failure = 1;
  int state;
  Review *review;

  void create();
  void destroy();

  void test_validation_code_test_block(string);
  void test_invalidation_code_test_block(string);

  void test_validation_description_test_block(string);
  void test_invalidation_description_test_block(string);

  void test_validation_grade_test_block(unsigned int);
  void test_invalidation_grade_test_block(unsigned int);

public:
  int run();
};

#endif // ENTITIES_TESTS_REVIEW_TEST_HPP_
