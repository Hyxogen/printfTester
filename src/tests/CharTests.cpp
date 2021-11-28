#include "../PrintfTester.h"
#include "Tests.h"

#include <AirTester.h>
#include <vector>
#include <iostream>

#define CHAR_POLES 0x7F

static const std::vector<int>& GetTestVector() {
	static std::vector<int> vec;
	if (vec.empty()) {
		for (int i = -CHAR_POLES; i < CHAR_POLES; i++)
			vec.push_back(i);
	}
	return vec;
}

//TEST(char_tests, single_char) {
//	for (int i = -CHAR_POLES; i <= CHAR_POLES; i++)
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%c), i));
//}
//
//TEST(char_tests, char_in_string) {
//	for (int i = -CHAR_POLES; i <= CHAR_POLES; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_HELLOWORLD(%c), i));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_LORUM(%c), i));
//	}
//}
//
//TEST(char_tests, chars_in_string) {
//	for (int i = -CHAR_POLES; i <= CHAR_POLES; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%c), i, CHAR_POLES - i));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%c), i, CHAR_POLES - i));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_THREE_SPECIFIER_HELLOWORLD(%c), i, CHAR_POLES - i, (i % 11) + 'a'));
//	}
//}
//
//TEST(char_tests, only_chars_string) {
//	for (int i = -CHAR_POLES; i <= CHAR_POLES; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_HELLOWORLD(%c), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i)));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_LORUM(%c), TESTS_ONLY_SPECIFIER_LORUM_ARG(i)));
//	}
//	EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_HELLOWORLD(%c), 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n'));
//}

//MANDATORY_TESTS(aaa, c, GetTestVector())
BONUS_SINGLE_SPECIFIER_NWIDTH_FSPEC_(char, c, GetTestVector())
BONUS_SINGLE_SPECIFIER_NWIDTH_VSPEC_(char, c, GetTestVector())
//BONUS_SINGLE_SPECIFIER_FWIDTH_NSPEC_(char, c, GetTestVector())
//BONUS_SINGLE_SPECIFIER_VWIDTH_NSPEC_(char, c, GetTestVector())
//BONUS_SINGLE_SPECIFIER_FWIDTH_FSPEC_(char, c, GetTestVector())
//BONUS_SINGLE_SPECIFIER_FWIDTH_VSPEC_(char, c, GetTestVector())
//BONUS_SINGLE_SPECIFIER_VWIDTH_FSPEC_(char, c, GetTestVector())
//BONUS_SINGLE_SPECIFIER_VWIDTH_VSPEC_(char, c, GetTestVector())
//BONUS_TESTS_(char, c, GetTestVector());

//TEST(complete_test, only_chars_string) {
//	for (auto val : GetTestVector()) {
//		TEST_PRINTF_FUNC(TESTS_ONLY_SPECIFIER_HELLOWORLD(c), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(val));
//		TEST_PRINTF_FUNC(TESTS_ONLY_SPECIFIER_LORUM(c), TESTS_ONLY_SPECIFIER_LORUM_ARG(val));
//	}
//}
//
//TEST(char_bonus_tests, single_char) {
//	for (int i = -CHAR_POLES; i <= CHAR_POLES; i++) {
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%1c), i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%42c), i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-1c), i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-42c), i));
//		for (int w = 0; w < MAX_WIDTH; w++) {
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%*c), w, i));
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER(%-*c), w, i));
//		}
//	}
//}
//
//TEST(char_bonus_tests, char_in_string) {
//	for (int i = -CHAR_POLES; i <= CHAR_POLES; i++) {
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_HELLOWORLD(%1c), i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_LORUM(%42c), i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_HELLOWORLD(%-1c), i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_LORUM(%-42c), i));
//		for (int w = 0; w < MAX_WIDTH; w++) {
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_LORUM(%*c), w, i));
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONE_SPECIFIER_LORUM(%-*c), w, i));
//		}
//	}
//}
//
//TEST(char_bonus_tests, chars_in_string) {
//	for (int i = -CHAR_POLES; i <= CHAR_POLES; i++) {
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%1c), i, CHAR_POLES - i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%42c), i, CHAR_POLES - i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%1c), i, CHAR_POLES - i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%42c), i, CHAR_POLES - i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_THREE_SPECIFIER_HELLOWORLD(%1c), i, CHAR_POLES - i, (i % 11) + 'a'));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_THREE_SPECIFIER_HELLOWORLD(%42c), i, CHAR_POLES - i, (i % 11) + 'a'));
//
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%-1c), i, CHAR_POLES - i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%-42c), i, CHAR_POLES - i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%-1c), i, CHAR_POLES - i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%-42c), i, CHAR_POLES - i));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_THREE_SPECIFIER_HELLOWORLD(%-1c), i, CHAR_POLES - i, (i % 11) + 'a'));
//		EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_THREE_SPECIFIER_HELLOWORLD(%-42c), i, CHAR_POLES - i, (i % 11) + 'a'));
//		for (int w = 0; w < MAX_WIDTH; w++) {
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%*c), w, i, w, CHAR_POLES - i));
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%*c), w, i, w, CHAR_POLES - i));
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_THREE_SPECIFIER_HELLOWORLD(%*c), w, i, w, CHAR_POLES - i, w, (i % 11) + 'a'));
//
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_HELLOWORLD(%-*c), w, i, w, CHAR_POLES - i));
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_TWO_SPECIFIER_LORUM(%-*c), w, i, w, CHAR_POLES - i));
//			EXPECT_TRUE( ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_THREE_SPECIFIER_HELLOWORLD(%-*c), w, i, w, CHAR_POLES - i, w, (i % 11) + 'a'));
//		}
//	}
//}
//
//TEST(char_bonus_tests, only_chars_string) {
//	for (int i = -CHAR_POLES; i <= CHAR_POLES; i++) {
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_HELLOWORLD(%1c), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i)));
//		EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_HELLOWORLD(%-1c), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i)));
//	}
//	EXPECT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, TESTS_ONLY_SPECIFIER_HELLOWORLD(%42c), 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\n'));
//}