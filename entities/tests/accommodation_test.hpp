#ifndef ENTITIES_TESTS_ACCOMMODATION_TEST_HPP_
#define ENTITIES_TESTS_ACCOMMODATION_TEST_HPP_
#include "../accommodation.hpp"

/**
 * @author Fernando Jorge - 200017829
 */

class AccommodationTest
{
private:
  inline static const int success = 0;
  inline static const int failure = 1;
  int state;
  Accommodation *obj;

  void create();
  void destroy();

  void test_validation_code_test(string);
  void test_invalidation_code_test(string);

  void test_validation_city_test(string);
  void test_invalidation_city_test(string);

  void test_validation_country_test(string);
  void test_invalidation_country_test(string);

  void test_validation_grade_test(unsigned int);
  void test_invalidation_grade_test(unsigned int);

  void test_validation_description_test(string);
  void test_invalidation_description_test(string);

public:
  AccommodationTest();
  int run();
};

inline AccommodationTest::AccommodationTest(){};

#endif // ENTITIES_TESTS_ACCOMMODATION_TEST_HPP_