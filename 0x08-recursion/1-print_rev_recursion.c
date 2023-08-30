#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - print rev a string
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	int l = strlen(s);
	int i = 0;

	if (i <= l)
	{
		_putchar(*(s + l));
		i++;
		s--;
		_print_rev_recursion(s);
	}
}
