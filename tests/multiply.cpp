#include "multiply.h"

#define BOOST_TEST_MODULE multiply_test

#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(zero) {
   BOOST_TEST(0 == multiply(0, 0));
}

BOOST_AUTO_TEST_CASE(little_float) {
   BOOST_TEST(0 == multiply(0.5, 0.5));
}

BOOST_AUTO_TEST_CASE(one) {
   BOOST_TEST(1 == multiply(1, 1));
}
