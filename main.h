#ifndef print
#define print
#include <stdlib.h>
#include <iostream>

struct print_arg
{
	char *spec;
	int (*f)(va_list)
}
