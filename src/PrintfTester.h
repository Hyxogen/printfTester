#ifndef PRINTFTESTER_H
#define PRINTFTESTER_H

#include <stdarg.h>
#include <unistd.h>
#include <iostream>
#include "utils/Assert.h"

#define BUFFER_SIZE 4096
/*
 * TODO
 * test functie voor printf afmaken
 * mem leak check afmaken
 * mem fail check afmaken
 * mandatory en bonus checks maken voor char string en signed int
 */

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wformat-security"
template<typename... Type>
int ComparePrintf(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...), const char *format, Type... ts) {
	static int	stdout_copy = 0;
	char		buffer1[BUFFER_SIZE + 1];
	char		buffer2[BUFFER_SIZE + 1];
	int			pipe_fds[2];
	int 		ret1, ret2;
	size_t 		read_size;

	if (!stdout_copy) {
		ASSERT((stdout_copy = dup(1)) != -1)
	}

//	ASSERT(setvbuf(stdout, NULL, _IONBF, 0) != EOF)
	ASSERT(pipe(pipe_fds) != -1)
	ASSERT(dup2(pipe_fds[1], 1) != -1)
	ret1 = printf1(format, ts...);
	fflush(stdout);
	ASSERT((read_size = read(pipe_fds[0], &buffer1[0], BUFFER_SIZE)) >= 0)
	buffer1[read_size] = '\0';

	ret2 = printf2(format, ts...);
	fflush(stdout);
	ASSERT((read_size = read(pipe_fds[0], &buffer2[0], BUFFER_SIZE)) >= 0)
	buffer2[read_size] = '\0';
	ASSERT(dup2(stdout_copy, 1) != -1)
	ASSERT(close(pipe_fds[0]) != -1)
	ASSERT(close(pipe_fds[1]) != -1)

	return (!std::strcmp(&buffer1[0], &buffer2[0]) && ret1 == ret2);
}
#pragma clang diagnostic pop

#endif //PRINTFTESTER_H
