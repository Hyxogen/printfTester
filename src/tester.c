static int (*g_tests[])() = {
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
	return !run_all_tests();
}