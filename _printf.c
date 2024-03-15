#include "main.h"

/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	int c1, c_char = 0;
	va_list l;

	va_start(l, format);

	for (c1 = 0; format[c1] != '\0'; c1++)
	{
		if (format[c1] == '%')
		{
			if (format[c1 + 1] == '%')
			{
				write (1, &format[c1 + 1], 1);
				c_char++;
				c1 += 1;
			}
			else
			{
				c_char += get_func(format[c1 + 1])(l);
				c1 += 1;
			}
		}
		else
		{
			write (1, &format[c1], 1);
			c_char++;
		}
	}

	va_end(l);

	return (c_char);
		
}
