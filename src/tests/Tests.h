//
// Created by Daan Meijer on 11/23/21.
//

#ifndef MANDATORYTESTS_H
#define MANDATORYTESTS_H

#define TESTS_NO_SPECIFIER_HELLOWORLD(sp) "Hello World!\n"
#define TESTS_ONE_SPECIFIER_HELLOWORLD(sp) #sp"ello World!\n"
#define TESTS_TWO_SPECIFIER_HELLOWORLD(sp) #sp"ello World!"#sp""
#define TESTS_THREE_SPECIFIER_HELLOWORLD(sp) #sp"ello"%sp"World!"#sp""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD(sp) #sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp#sp""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i) i, i, i, i, i, i, i, i, i, i, i, i, i

int	SingleCharTest(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...));
int CharInString(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...));
int CharsInString(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...));
int OnlyCharsString(int (*printf1)(const char *, ...), int (*printf2)(const char *, ...));

#endif //MANDATORYTESTS_H
