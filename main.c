#include "main.h"
#include <stdlib.h>

/**
 *
 *
 */

int main(void)
{
	int a = 10;
	char b = 'b';
	int c = 102222;
	char *str = "Hola Mundo";
	_printf("Hola mundo\n");
	_printf("%s\n", str);
	_printf("%i\n", a);
	_printf("%d%c\n", c, b);
	_printf("Hola %% %d\n", c);


	return (0);

}
