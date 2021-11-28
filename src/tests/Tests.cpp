//
// Created by Daan Meijer on 28/11/2021.
//

#include "Tests.h"
#include <iostream>

extern "C" {
#include "ft_printf.h"
}

PrintfFunc_T GetTestFunction() {
	return &ft_printf;
}

PrintfFunc_T GetCorrectFunction() {
	return &std::printf;
}