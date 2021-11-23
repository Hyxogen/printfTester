#include "../PrintfTester.h"
#include "Tests.h"

#define CHAR_POLES 0xFFF
#define MAX_WIDTH 20

int	TestSingleChar(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int	passed;

	passed = 1;
	for (int i = -CHAR_POLES; i <= CHAR_POLES && passed; i++)
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%c), i);
	return passed;
}

int TestCharInString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = -CHAR_POLES; i <= CHAR_POLES && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_HELLOWORLD(%c), i);
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_LORUM(%c), i);
	}
	return passed;
}

int TestCharsInString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = -CHAR_POLES; i <= CHAR_POLES && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_HELLOWORLD(%c), i, CHAR_POLES - i);
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_LORUM(%c), i, CHAR_POLES - i);
		passed *= ComparePrintf(printf1, printf2, TESTS_THREE_SPECIFIER_HELLOWORLD(%c), i, CHAR_POLES - i, (i % 11) + 'a');
	}
	return passed;
}

int TestOnlyCharsString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = -CHAR_POLES; i <= CHAR_POLES && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_HELLOWORLD(%c), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i));
		passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_LORUM(%c), TESTS_ONLY_SPECIFIER_LORUM_ARG(i));
	}
	passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_HELLOWORLD(%c), 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n');
	return passed;
}

int	TestBonusSingleChar(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = -CHAR_POLES; i <= CHAR_POLES && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%1c), i);
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%42c), i);
		for (int w = 0; w < MAX_WIDTH; w++)
			passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%*c), w, i);
	}
	return passed;
}

int TestBonusCharInString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = -CHAR_POLES; i <= CHAR_POLES && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_HELLOWORLD(%1c), i);
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_LORUM(%42c), i);
		for (int w = 0; w < MAX_WIDTH; w++)
			passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_LORUM(%*c), w, i);
	}
	return passed;
}

int TestBonusCharsInString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = -CHAR_POLES; i <= CHAR_POLES && passed; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_HELLOWORLD(%1c), i, CHAR_POLES - i);
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_HELLOWORLD(%42c), i, CHAR_POLES - i);
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_LORUM(%1c), i, CHAR_POLES - i);
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_LORUM(%42c), i, CHAR_POLES - i);
		passed *= ComparePrintf(printf1, printf2, TESTS_THREE_SPECIFIER_HELLOWORLD(%1c), i, CHAR_POLES - i, (i % 11) + 'a');
		passed *= ComparePrintf(printf1, printf2, TESTS_THREE_SPECIFIER_HELLOWORLD(%42c), i, CHAR_POLES - i, (i % 11) + 'a');
		for (int w = 0; w < MAX_WIDTH; w++) {
			passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_HELLOWORLD(%*c), w, i, w, CHAR_POLES - i);
			passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_LORUM(%*c), w, i, w, CHAR_POLES - i);
			passed *= ComparePrintf(printf1, printf2, TESTS_THREE_SPECIFIER_HELLOWORLD(%*c), w, i, w, CHAR_POLES - i, w, (i % 11) + 'a');
		}
	}
	return passed;
}

int TestBonusOnlyCharsString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	(void)printf1;
	(void)printf2;
	return true;
}
