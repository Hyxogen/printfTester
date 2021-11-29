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

// ALL_MANDATORY_TESTS(char, "c", GetTestVector())
ALL_BONUS_TESTS(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_(char, "c", GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(char, "c", "-", mflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(char, "c", " ", bflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(char, "c", " ", bflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(char, "c", " ", bflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(char, "c", " ", bflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(char, "c", "#", sflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(char, "c", "#", sflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(char, "c", "#", sflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(char, "c", "#", sflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(char, "c", "0", zflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(char, "c", "0", zflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(char, "c", "0", zflag, GetTestVector())
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(char, "c", "0", zflag, GetTestVector())

// GENERIC_SINGLE_SPECIFIER_TEST_(bonus, char, "c",, nflag,, nwidth, ".1", ofprec, GetTestVector())
#endif