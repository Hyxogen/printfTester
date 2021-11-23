#include "Tests.h"
#include "../PrintfTester.h"
#include <string>

const static char *g_Strings[] = {
		"Hello",
		"World",
		"Hello World!",
		"\0",
		"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.",
		0
};

const static char *g_OtherStrings[] = {
		"Elloh",
		"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.",
		"Dlrow",
		"\0",
		"Hello World!",
		0
};


int TestSingleString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int	passed;

	passed = 1;
	for (int i = 0; g_Strings[i] != 0; i++)
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%s), g_Strings[i]);
	return passed;
}

int TestStringInString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = 0; g_Strings[i] != 0; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_HELLOWORLD(%s), g_Strings[i]);
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER_LORUM(%s), g_Strings[i]);
	}
	return passed;
}

int TestStringsInString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = 0; g_Strings[i] != 0; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_HELLOWORLD(%s), g_Strings[i], g_OtherStrings[i]);
		passed *= ComparePrintf(printf1, printf2, TESTS_TWO_SPECIFIER_LORUM(%s), g_Strings[i], g_OtherStrings[i]);
		passed *= ComparePrintf(printf1, printf2, TESTS_THREE_SPECIFIER_HELLOWORLD(%s),  g_Strings[i], g_OtherStrings[i], g_Strings[i]);
	}
	return passed;
}

int TestOnlyStringsString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = 0; g_Strings[i] != 0; i++)
		passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_HELLOWORLD(%s), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(g_Strings[i]));
	passed *= ComparePrintf(printf1, printf2, TESTS_ONLY_SPECIFIER_HELLOWORLD(%s), "H", "e", "l", "l", "o", " ", "W", "o", "r", "l", "d", "!", "\n");
	return passed;
}

int TestBonusWidthSingleString(PrintfFunc_T printf1, PrintfFunc_T printf2) {
	int passed;

	passed = 1;
	for (int i = 0; g_Strings[i] != 0; i++) {
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%1s), g_Strings[i]);
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%42s), g_Strings[i]);
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%-1s), g_Strings[i]);
		passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%-42s), g_Strings[i]);
		for (int w = 0; w < MAX_WIDTH; w++) {
			passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%*s), w, g_Strings[i]);
			passed *= ComparePrintf(printf1, printf2, TESTS_ONE_SPECIFIER(%-*s), w, g_Strings[i]);
		}
	}
	return passed;
}

int TestBonusWidthStringInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusWidthStringsInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusWidthOnlyStringsString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusPrecSingleString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusPrecStringInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusPrecStringsInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestBonusPrecOnlyStringsString(PrintfFunc_T printf1, PrintfFunc_T printf2);