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
	char str_n[6] = {"(null)"};

	str = va_arg(l, char*);

	if (str == NULL)
	{
		write (1, &str_n, 6);
		return (6);
	}
	else
	{
	for (cont = 0; str[cont] != '\0'; cont++)
		write (1, &str[cont], 1);

	return (cont);
	}
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
	char numzero = '0';

	num = va_arg(l, int);

	if (num == 0)
	{
		write (1, &numzero, 1);
		return (1);
	}
	else
	{
	s_num = str_num(num);

	for (cont = 0; s_num[cont] != '\0'; cont++)
		write (1, &s_num[cont], 1);

	free (s_num);
	}

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
	char numzero = '0';

	num = va_arg(l, int);

	if (num == 0)
	{
		write (1, &numzero, 1);
		return (1);
	}
	else
	{
	s_num = str_num(num);

	for (cont = 0; s_num[cont] != '\0'; cont++)
		write (1, &s_num[cont], 1);

	free(s_num);

	}
	return (cont);
	
}

/**
 *
 *
 */

char *str_num(int num)
{
	int cont, check_nega = 0;
	int numlen = 0, numcopy, lastdig;
	char *str;

	if (num < 0)
	{
		if (num == -2147483647)
			num++;

		num = num * -1;
		check_nega = 1;
	}

	numcopy = num;

	while (numcopy != 0)
	{
		numlen++;
		numcopy /= 10;
	}

	if (check_nega == 1)
	numlen++;

	str = malloc((numlen + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (cont = 0; cont < numlen; cont++)
	{
		lastdig = num % 10;
		num /= 10;
		str[numlen - (cont + 1)] = lastdig + '0';
	}

	if (check_nega == 1)
		str[0] = '-';

	str[numlen] = '\0';

	return (str);
}
