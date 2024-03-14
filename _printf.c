#include "main.h"

/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	int c1, c_char = 0,
	va_list list;

	for (c1 = 0; format[c1] != '\0'; c1++)
	{
		if (format[c1] == '%')
		{
			if (format[c1 + 1] == '%')
			{
				write (1, &format[c1 + 1], 1);
				c_char++;
				c1 = c1 + 2;
			}
			else
			{
				c_char += get_func(format[c1 + 1])(list);
				c1 = c1 + 2;
			}
		}
		else
		{
			write (1, &format[c1], 1);
			c_char++;
		}
	}

	return (c_char);
		
}
