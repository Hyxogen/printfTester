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
// GENERIC_SINGLE_SPECIFIER_TEST_(bonus, char, "c",, nflag,, nwidth, ".1", ofprec, GetTestVector())
#endif