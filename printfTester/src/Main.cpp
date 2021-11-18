#include "AirTester.h"

TEST(simple_tests, equal) {
	EXPECT_TRUE(true == true)
	EXPECT_TRUE(false == true)
	EXPECT_FALSE(false == false)
	EXPECT_FALSE(true == false)
	EXPECT_EQUAL(5, 6)
	EXPECT_EQUAL(5, 5)
	EXPECT_EQUAL("Abc", "Abc")
	EXPECT_EQUAL("Abc", "abc")
	EXPECT_NOT_EQUAL("Abc", "Abc")
	EXPECT_NOT_EQUAL("Abc", "abc")
}

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	RUN_ALL_TESTS();
	return (0);
}