//
// Created by Daan Meijer on 11/23/21.
//

#ifndef MANDATORYTESTS_H
#define MANDATORYTESTS_H

#define TESTS_NO_SPECIFIER_HELLOWORLD(sp) "Hello World!\n"
#define TESTS_ONE_SPECIFIER_HELLOWORLD(sp) #sp"ello World!\n"
#define TESTS_TWO_SPECIFIER_HELLOWORLD(sp) #sp"ello World!"#sp""
#define TESTS_THREE_SPECIFIER_HELLOWORLD(sp) #sp"ello"#sp"World!"#sp""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD(sp) #sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i) i, i, i, i, i, i, i, i, i, i, i, i, i

typedef int (*PrintfFunc_T)(const char *, ...);

int TestNoSpecifier(PrintfFunc_T printf1, PrintfFunc_T printf2);

int	TestSingleChar(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestCharInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestCharsInString(PrintfFunc_T printf1, PrintfFunc_T printf2);
int TestOnlyCharsString(PrintfFunc_T printf1, PrintfFunc_T printf2);

#endif //MANDATORYTESTS_H
