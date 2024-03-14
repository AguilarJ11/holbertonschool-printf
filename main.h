#ifndef print
#define print
#include <stdlib.h>
#include <iostream>

/**
 *
 *
 */

struct print_arg
{
	char *arg;
	int (*f)(va_list)
}

int (*get_func(char *))(va_list);
int get_char(va_list);
int get_int(va_list);
int get_string(va_list);
int get_decimal(va_list);

#endif
