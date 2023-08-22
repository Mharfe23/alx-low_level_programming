#include "main.h"
/**
 * _puts - print a string
 * @str: string
 */
void _puts(char *str)
{
	int i;
	int m = sizeof(*str)

	for (i = 0; i <= m; i++)
		_putchar(*str(i));
	_putchar('\n');
}
