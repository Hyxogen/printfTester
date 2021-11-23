#include <iostream>
#include "tests/Tests.h"

extern "C" {
#include "ft_printf.h"
}

static int (*g_tests[])(PrintfFunc_T printf1, PrintfFunc_T printf2) = {
//		&TestNoSpecifier,
//		&TestSingleChar,
//		&TestCharInString,
//		&TestCharsInString,
//		&TestOnlyCharsString,
//		&TestBonusSingleChar,
//		&TestBonusCharInString,
//		&TestBonusCharsInString,
//		&TestBonusOnlyCharsString,
		&TestSingleString,
		&TestStringInString,
		&TestStringsInString,
		&TestOnlyStringsString,
		&TestBonusWidthSingleString,
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
			std::printf("KO(%d)\n", index);
			ret = 0;
		} else
			std::printf("OK\n");
		index++;
	}
	return ret;
}

static int RunAllTests() {
	return RunAllTests(&std::printf, &ft_printf);
//	return RunAllTests(&std::printf, &std::printf);
}

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	return !RunAllTests();
}