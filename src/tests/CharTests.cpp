#include "../PrintfTester.h"
#include "Tests.h"


int	TestSingleChar(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int	passed;

	passed = 1;
	for (int i = -0xFFFF; i <= 0xFFFF && passed; i++)
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%c), i);
	return passed;
}

int TestCharInString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = -0xFFFF; i <= 0xFFFF && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_HELLOWORLD(%c), i);
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_LORUM(%c), i);
	}
	return passed;
}

int TestCharsInString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = -0xFFFF; i <= 0xFFFF && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_HELLOWORLD(%c), i, 0xFFFF - i);
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_LORUM(%c), i, 0xFFFF - i);
		passed *= ComparePrintf(printf1, printf2, TESTS_THREE_SPECIFIER_HELLOWORLD(%c), i, 0xFFFF - i, (i % 11) + 'a');
	}
	return passed;
}

int TestOnlyCharsString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = -0xFFFF; i <= 0xFFFF && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_HELLOWORLD(%c), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i));
		passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_LORUM(%c), TESTS_ONLY_SPECIFIER_LORUM_ARG(i));
	}
	passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_HELLOWORLD(%c), 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n');
	return passed;
}