#ifndef print
#define print
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct print_arg - Estructura
 * @arg: dependiendo que letra va un caso
 * @f: Un puntero a la función
 */
struct print_arg
{
	char *arg;
	int (*f)(va_list);
};

int _printf(const char *format, ...);
int (*get_func(char s))(va_list);
int get_char(va_list);
int get_int(va_list);
int get_string(va_list);
int get_decimal(va_list);
char *str_num(int num);

#endif
