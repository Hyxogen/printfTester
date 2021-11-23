#include "../PrintfTester.h"
#include "Tests.h"


int	SingleCharTest(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...)) {
	int	passed;

	passed = 1;
	for (int i = -0xFFFF; i <= 0xFFFF && passed; i++)
		passed *= ComparePrintf(printf1, printf2, "%c", i);
	return passed;
}

int CharInString(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...)) {
	int passed;

	passed = 1;
	for (int i = -0xFFFF; i <= 0xFFFF && passed; i++)
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_HELLOWORLD(%c), i);
	return passed;
}

int CharsInString(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...)) {
	int passed;

	passed = 1;
	for (int i = -0xFFFF; i <= 0xFFFF && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_HELLOWORLD(%c), i, 0xFFFF - i);
//		passed *= ComparePrintf(printf1, printf2, TESTS_THREE_SPECIFIER_HELLOWORLD(%c), i, 0xFFFF - i, (i % 11) + 'a');
	}
	return passed;
}

int OnlyCharsString(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...)) {
	int passed;

	passed = 1;
	for (int i = -0xFFFF; i <= 0xFFFF && passed; i++)
		passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_HELLOWORLD(%c), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i));
	passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_HELLOWORLD(%c), 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n');
	return passed;
}