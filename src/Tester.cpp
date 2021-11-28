#include <iostream>
#include "tests/Tests.h"
#include <AirTester.h>

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	AirTester::GetInstance()->RunAll();
	return 0;
}