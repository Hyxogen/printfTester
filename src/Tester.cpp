#include <iostream>
#include "tests/Tests.h"

extern "C" {
#include "ft_printf.h"
}

static int (*g_tests[])(PrintfFunc_T printf1, PrintfFunc_T printf2) = {
		&TestNoSpecifier,
		&TestSingleChar,
		&TestCharInString,
		&TestCharsInString,
		&TestOnlyCharsString,
		&TestBonusSingleChar,
		&TestBonusCharInString,
		&TestBonusCharsInString,
		&TestBonusOnlyCharsString,
		0
};

static int RunAllTests(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int index;
	int ret;

	index  = 0;
	ret = 1;
	while (g_tests[index]) {
		std::printf("Test[%d]:\n", index);
		if (!g_tests[index](printf1, printf2)) {
			std::printf("Failed at index: %d\n", index);
			ret = 0;
		}
		std::printf("OK\n");
		index++;
	}
	return ret;
}

static int RunAllTests() {
	return RunAllTests(&std::printf, &ft_printf);
}

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	return !RunAllTests();
}