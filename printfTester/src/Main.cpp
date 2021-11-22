#include <iostream>
#include <unistd.h>
#include "AirTester.h"

extern "C" {
#include "ft_printf.h"
}

TEST(mandatory_tests, no_arg) {
	
}

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	RUN_ALL_TESTS();
	return (0);
}