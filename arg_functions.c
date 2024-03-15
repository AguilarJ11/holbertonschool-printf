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

int get_string(va_list l)
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

int get_int(va_list l)
{
	int cont;
	int num;
	char *s_num;

	num = va_arg(l, int);
	s_num = str_num(num);

	for (cont = 0; s_num[cont] != '\0'; cont++)
		write (1, &s_num[cont], 1);

	free (s_num);

	return (cont);

}

/**
 *
 *
 */

int get_decimal(va_list l)
{
	int cont;
	int num;
	char *s_num;

	num = va_arg(l, int);
	s_num = str_num(num);

	for (cont = 0; s_num[cont] != '\0'; cont++)
		write (1, &s_num[cont], 1);

	free(s_num);

	return (cont);
}

char *str_num(int num)
{
	int cont;
	int numlen = 0, n, lastdig;
	char *str;

	n = num;

	while (n != 0)
	{
		numlen++;
		n /= 10;
	}

	str = malloc((numlen + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (cont = 0; cont < numlen; cont++)
	{
		lastdig = num % 10;
		num /= 10;
		str[numlen - (cont + 1)] = lastdig + '0';
	}

	str[numlen] = '\0';

	return (str);
}
