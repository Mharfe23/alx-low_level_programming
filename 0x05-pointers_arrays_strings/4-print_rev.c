#include "main.h"
/**
 * print_rev - print string in reverse
 * @s:char
 */
void print_rev(char *s)
{
	while (*s != '\0')
		s++;
	s--;
	while (s >= *s)
		_putchar(*s);
}
