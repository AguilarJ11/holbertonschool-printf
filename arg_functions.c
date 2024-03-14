#include "main.h"

/*
 *
 *
 */

int get_char(va_list l)
{
	char arg;

	arg = va_arg(l, int);
	write (1, &arg, 1);

	return (1);
}

/**
 *
 *
 */

int get_string(va_list)
{
	int cont;
	char *str;

	str = va_arg(l, char*);
	for (cont = 0; str[cont] != '\0'; cont++)
		write (1, &str[cont], 1);

	return (cont);
}

/**
 *
 *
 */

int get_int(va_list)
{
	int cont;
	int num, digit;

	num = va_arg(l, int);

	for (cont = 0; num > 0; cont++)
	{
		digit = num % 10;
		write (1, &digit, 1);
		num /= 10;
	}

	return (cont);

}

/**
 *
 *
 */

int get_decimal(va_list)
{
	int cont;
	int num, digit;

	num = va_arg(l, int);

	for (cont = 0; num > 0; cont++)
	{
		digit = num % 10;
		write (1, &digit, 1);
		num /= 10;
	}

	return (cont);
}
