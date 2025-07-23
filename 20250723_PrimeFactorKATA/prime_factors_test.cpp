#include "gmock/gmock.h"
#include "prime_factors.cpp"
using namespace testing;

class TEstFixture : public  Test {
public:
	PrimeFactors prime_factor;
	vector<int> expected;
};

TEST_F(TEstFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(TEstFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(TEstFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(TEstFixture, Of4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}