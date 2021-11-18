#include <iostream>
#include "AirTester.h"

extern "C" {
#include "ft_printf.h"
}

TEST(mandatory_tests, character) {
	char correct_buffer[1024];
	char test_buffer[1024];

	std::sprintf(correct_buffer, "There are no chars in this strings!\n");

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