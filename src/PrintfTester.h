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
	char	buffer1[BUFFER_SIZE + 1];
	char	buffer2[BUFFER_SIZE + 1];
	int		pipe_fds[2];
	int 	temp_fd;
	int 	ret1, ret2;
	size_t 	read_size;

	std::cerr << "test" << std::endl;
	ASSERT(setvbuf(stdout, NULL, _IONBF, 0) != EOF)
	ASSERT(pipe(pipe_fds) != -1)
	ASSERT((temp_fd = dup(1)) != -1)
	ASSERT(dup2(pipe_fds[1], 1) != -1)
	ret1 = printf1(format, ts...);
	//Errort omdat ik probeer te readen uit 1 wat niet kan, verander naar de pipe
	ASSERT((read_size = read(pipe_fds[0], &buffer1[0], BUFFER_SIZE)) >= 0)
	buffer1[read_size] = '\0';

	ret2 = printf2(format, ts...);
	ASSERT((read_size = read(pipe_fds[0], &buffer2[0], BUFFER_SIZE)) >= 0)
	buffer2[read_size] = '\0';
	ASSERT(dup2(temp_fd, 1) != -1)
	ASSERT(close(pipe_fds[0]) != -1)
	ASSERT(close(pipe_fds[1]) != -1)

	return (ret1 == ret2);
//	return (std::strcmp(&buffer1[0], &buffer2[0]) && ret1 == ret2);
}
#pragma clang diagnostic pop

#endif //PRINTFTESTER_H
