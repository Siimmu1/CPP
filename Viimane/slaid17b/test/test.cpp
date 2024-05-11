#include <stdexcept>
#include "gtest/gtest.h"
#include "mathlib.h"

TEST(TestAdd, Positive) {
	EXPECT_EQ(4, add(2, 2));
	EXPECT_EQ(3, add(1, 2));
	EXPECT_EQ(3, add(2, 1));
}

TEST(TestDivide, Positive) {
	EXPECT_EQ(2, divide(4, 2));
	EXPECT_EQ(4, divide(8, 2));
}

TEST(TestDivide, Zero) {
	EXPECT_THROW(divide(1, 0), std::invalid_argument);
}
