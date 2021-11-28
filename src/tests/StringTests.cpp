//#include "Tests.h"
//#include <string>
//
//const static char *g_Strings[] = {
//		"Hello",
//		"World",
//		"Hello World!",
//		"\0",
//		"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.",
//		0
//};
//
//const static char *g_OtherStrings[] = {
//		"Elloh",
//		"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.",
//		"Dlrow",
//		"\0",
//		"Hello World!",
//		0
//};
//
//TEST(string_tests, single_string) {
//	for (int i = 0; g_Strings[i] != 0; i++)
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%s), g_Strings[i]));
//}
//
//TEST(string_tests, string_in_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_HELLOWORLD(%s), g_Strings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_LORUM(%s), g_Strings[i]));
//	}
//}
//
//TEST(string_tests, strings_in_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_THREE_SPECIFIER_HELLOWORLD(%s),  g_Strings[i], g_OtherStrings[i], g_Strings[i]));
//	}
//}
//
//TEST(string_tests, only_strings_string) {
//	for (int i = 0; g_Strings[i] != 0; i++)
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_HELLOWORLD(%s), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(g_Strings[i])));
//	EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_HELLOWORLD(%s), "H", "e", "l", "l", "o", " ", "W", "o", "r", "l", "d", "!", "\n"));
//}
//
//TEST(string_bonus_tests, width_single_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%1s), g_Strings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%42s), g_Strings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-1s), g_Strings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-42s), g_Strings[i]));
//
//		for (int w = 0; w < MAX_WIDTH; w++) {
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%*s), w, g_Strings[i]));
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-*s), w, g_Strings[i]));
//		}
//	}
//}
//
//TEST(string_bonus_tests, prec_single_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%.1s), g_Strings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%.42s), g_Strings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-.1s), g_Strings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-.42s), g_Strings[i]));
//
//		for (int w = 0; w < MAX_WIDTH; w++) {
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%.*s), w, g_Strings[i]));
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-.*s), w, g_Strings[i]));
//		}
//	}
//}
//
//TEST(string_bonus_tests, width_strings_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%42s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%1s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%42s), g_Strings[i], g_OtherStrings[i]));
//
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%-1s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%-42s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%-1s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%-42s), g_Strings[i], g_OtherStrings[i]));
//
//		for (int w = 0; w < MAX_WIDTH; w++) {
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%*s), w, g_Strings[i], w, g_OtherStrings[i]));
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%-*s), w, g_Strings[i], w, g_OtherStrings[i]));
//
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%*s), w, g_Strings[i], w, g_OtherStrings[i]));
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%-*s), w, g_Strings[i], w, g_OtherStrings[i]));
//		}
//	}
//}
//
//TEST(string_bonus_tests, prec_strings_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%.1s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%.42s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%.1s), g_Strings[i], g_OtherStrings[i]));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%.42s), g_Strings[i], g_OtherStrings[i]));
//		for (int p = 0; p < MAX_PREC; p++) {
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%.*s), p, g_Strings[i], MAX_PREC - p, g_OtherStrings[i]));
//			EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%.*s), p, g_Strings[i], MAX_PREC - p, g_OtherStrings[i]));
//		}
//	}
//}
//
//TEST(string_bonus_tests, fprec_fwidth_single_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%1.1s), g_Strings[i]);
//		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%42.42s), g_Strings[i]);
//		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%-42.1s), g_Strings[i]);
//		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%-42.42s), g_Strings[i]);
//	}
//}
//
//TEST(string_bonus_tests, vprec_fwidth_single_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		for (int s = 0; s < MAX_PREC; s++) {
//			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%1.*s), s, g_Strings[i]);
//			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%-1.*s), s, g_Strings[i]);
//
//			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%42.*s), s, g_Strings[i]);
//			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%-42.*s), s, g_Strings[i]);
//		}
//	}
//}
//
//TEST(string_bonus_tests, fprec_vwidth_single_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		for (int w = 0; w < MAX_WIDTH; w++) {
//			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%*.1s), w, g_Strings[i]);
//			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%-*.1s), w, g_Strings[i]);
//
//			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%*.42s), w, g_Strings[i]);
//			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%-*.42s), w, g_Strings[i]);
//		}
//	}
//}
//
//TEST(string_bonus_tests, vprec_vwidth_single_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		for (int w = 0; w < MAX_WIDTH; w++) {
//			for (int p = 0; p < MAX_PREC; p++) {
//				TEST_PRINTF_FUNC(TESTS_TWO_SPECIFIER_HELLOWORLD(%*.*s), w, p, g_Strings[i]);
//				TEST_PRINTF_FUNC(TESTS_TWO_SPECIFIER_LORUM(%*.*s), w, p, g_Strings[i]);
//			}
//		}
//	}
//}
//
//TEST(string_bonus_tests, fprec_fwidth_strings_string) {
//	for (int i = 0; g_Strings[i] != 0; i++) {
//		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%1.1s), g_Strings[i]);
//		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%42.42s), g_Strings[i]);
//		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%-42.1s), g_Strings[i]);
//		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(%-42.42s), g_Strings[i]);
//	}
//}
//
////int TestBonusWidthStringInString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
////int TestBonusWidthStringsInString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
////int TestBonusWidthOnlyStringsString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
////int TestBonusPrecSingleString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
////int TestBonusPrecStringInString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
////int TestBonusPrecStringsInString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);
////int TestBonusPrecOnlyStringsString(PrintfFunc_T TEST_PRINTF, PrintfFunc_T CORRECT_PRINTF);