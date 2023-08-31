#include "main.h"
#include <string.h>
/**
 * rev - print rev a string
 * @s: string
 * @i: the iterative
 */
void rev(char *s, int i)
{
	int k = strlen(s);

	if (i < k)
	{
		rev(s, i + 1);
		_putchar(s[i]);
	}
}
/**
 * _print_rev_recursion - main function
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	rev(s, 0);
}

