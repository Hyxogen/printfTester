#include <iostream>
#include <AirTester.h>
#include "tests/Tests.h"
#include "PrintfTester.h"

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
//	std::cout << ComparePrintf(TEST_PRINTF, &std::printf, "%*.c\n", 6, 'a');
//	TEST_PRINTF("%*c\n", 6, 'a');
	AirTester::GetInstance()->RunAll();
	return 0;
}