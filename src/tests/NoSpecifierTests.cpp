#include "Tests.h"
#include "../PrintfTester.h"

int TestNoSpecifier(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int	passed;

	passed = 1;
	passed *= ComparePrintf(printf1, printf2, TESTS_NO_SPECIFIER_HELLOWORLD());
	return passed;
}