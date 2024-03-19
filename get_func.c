#include "main.h"

/**
 * get_func - depends of wich case, wich function will bee call
 *@s : char
 *Return: A pointer to the corresponding function
 *
 *
 */

int (*get_func(char s))(va_list)
{
/**
 *struct print_arg - Structure to map format specifiers to correspo fun
 *
 *
 */
	int c = 0;
	struct print_arg p_arg[] = {
		{"c", get_char},
		{"s", get_string},
		{"d", get_decimal},
		{"i", get_int},
		{NULL, NULL}
	};
	while (p_arg[c].arg != NULL)
	{
		if (p_arg[c].arg[0] == s)
			return (p_arg[c].f);
		c++;
	}

	return (NULL);
}
