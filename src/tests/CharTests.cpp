#include "../PrintfTester.h"
#include "Tests.h"

#include <AirTester.h>
#include <vector>
#include <iostream>

#define CHAR_POLES 0x7F
//#define DISABLE_CHAR_TEST

#ifdef DISABLE_CHAR_TEST

#else
static const std::vector<int>& GetTestVector() {
	static std::vector<int> vec;
	if (vec.empty()) {
		for (int i = -CHAR_POLES; i < CHAR_POLES; i++)
			vec.push_back(i);
	}
	return vec;
}

ALL_MANDATORY_TESTS(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_NO_FLAG_TEST(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_MINUS_FLAG_TESTS(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_BLANK_FLAG_TEST(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_SHARP_FLAG_TEST(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_ZERO_FLAG_TEST(char, "c", GetTestVector())

BONUS_SINGLE_SPECIFIER_STRING_NO_FLAG_TEST(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_MINUS_FLAG_TESTS(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_BLANK_FLAG_TEST(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_SHARP_FLAG_TEST(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_STRING_ZERO_FLAG_TEST(char, "c", GetTestVector())

// BONUS_TWO_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(char, "c", "", nflag, GetTestVector())
// BONUS_TWO_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(char, "c", "", nflag, GetTestVector())
// GENERIC_SINGLE_SPECIFIER_TEST_(bonus, char, "c",, nflag,, nwidth, ".1", ofprec, GetTestVector())
#endif