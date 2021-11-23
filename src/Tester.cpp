#include "tests/Tests.h"

static int (*g_tests[])(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...)) = {
		&SingleCharTest,
		0
};

static int run_all_tests() {
	int index;
	int ret;

	index  = 0;
	ret = 1;
	while (g_tests[index])
		ret *= g_tests[index++]();
	return ret;
}

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	return !run_all_tests();
}