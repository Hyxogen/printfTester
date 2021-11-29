#include "Tests.h"
#include <string>
#include <vector>

#define DISABLE_STRING_TEST

#ifdef DISABLE_STRING_TEST

#else
static const std::vector<const char*>& GetTestVector() {
	static std::vector<const char*> vec = {
			"Hello",
			"Hello World",
			"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.",
			"",
			" ",
			"asdf"
	};
	return vec;
}

ALL_MANDATORY_TESTS(string, "s", GetTestVector())
ALL_BONUS_TESTS(string, "s", GetTestVector())
#endif
//MANDATORY_ONLY_SPECIFIERS_IN_STRING_(string, "s", GetTestVector())