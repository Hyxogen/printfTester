#include <iostream>
#include "tests/Tests.h"

static int (*g_tests[])(PrintfFunc_T printf1, PrintfFunc_T printf2) = {
		&TestNoSpecifier,
		&TestSingleChar,
		&TestCharInString,
		&TestCharsInString,
		&TestOnlyCharsString,
		0
};

static int RunAllTests(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int index;
	int ret;

	index  = 0;
	ret = 1;
	while (g_tests[index])
		ret *= g_tests[index++](printf1, printf2);
	return ret;
}

static int RunAllTests() {
	return RunAllTests(&std::printf, &std::printf);
}

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	return !RunAllTests();
}