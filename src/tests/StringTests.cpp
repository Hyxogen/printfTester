#include "Tests.h"
#include "../PrintfTester.h"
#include <string>
#include <AirTester.h>

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

TEST(string_tests, single_string) {
	for (int i = 0; g_Strings[i] != 0; i++)
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%s), g_Strings[i]));
}

TEST(string_tests, string_in_string) {
	for (int i = 0; g_Strings[i] != 0; i++) {
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_HELLOWORLD(%s), g_Strings[i]));
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_LORUM(%s), g_Strings[i]));
	}
}

TEST(string_tests, strings_in_string) {
	for (int i = 0; g_Strings[i] != 0; i++) {
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%s), g_Strings[i], g_OtherStrings[i]));
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%s), g_Strings[i], g_OtherStrings[i]));
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_THREE_SPECIFIER_HELLOWORLD(%s),  g_Strings[i], g_OtherStrings[i], g_Strings[i]));
	}
}

TEST(string_tests, only_strings_string) {
	for (int i = 0; g_Strings[i] != 0; i++)
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_HELLOWORLD(%s), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(g_Strings[i])));
	EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_HELLOWORLD(%s), "H", "e", "l", "l", "o", " ", "W", "o", "r", "l", "d", "!", "\n"));
}

TEST(string_bonus_tests, width_single_string) {
	for (int i = 0; g_Strings[i] != 0; i++) {
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%1s), g_Strings[i]));
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%42s), g_Strings[i]));
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-1s), g_Strings[i]));
		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-42s), g_Strings[i]));
		for (int w = 0; w < MAX_WIDTH; w++) {
			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%*s), w, g_Strings[i]));
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-*s), w, g_Strings[i]));
		}
	}
}

//int TestBonusWidthSingleString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF) {
//	int passed;
//
//	passed = 1;
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		passed *= ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%1s), g_Strings[i]);
//		passed *= ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%42s), g_Strings[i]);
//		passed *= ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-1s), g_Strings[i]);
//		passed *= ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-42s), g_Strings[i]);
//		for (int w = 0; w < MAX_WIDTH; w++) {
//			passed *= ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%*s), w, g_Strings[i]);
//			passed *= ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-*s), w, g_Strings[i]);
//		}
//	}
//	return passed;
//}
//
//int TestBonusWidthStringInString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
//int TestBonusWidthStringsInString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
//int TestBonusWidthOnlyStringsString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
//int TestBonusPrecSingleString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
//int TestBonusPrecStringInString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
//int TestBonusPrecStringsInString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
//int TestBonusPrecOnlyStringsString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);