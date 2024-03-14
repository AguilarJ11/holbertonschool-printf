#include "main.h"

/**
 *
 *
 *
 */

int (*get_func(char *s))(va_list)
{
	int c = 0;
	struct print_arg p_arg[] =
	{
		{"c", get_char},
		{"s", get_string},
		{"d", get_decimal},
		{"i", get_int},
		{NULL, NULL}
	};
	
	while (p_arg[c].arg != NULL)
	{
		if (p_arg[c].arg[0] == s[0])
			return (p_arg[c].f);
		c++;
	}

	return (NULL);
}

		

