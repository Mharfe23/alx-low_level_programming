#include "main.h"
/**
 * print_rev - print string in reverse
 * @s:char
 */
void print_rev(char *s)
{
	char *m = s;

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (s >= m)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
