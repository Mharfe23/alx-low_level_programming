#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - print rev a string
 * @s: string
 */
char rev(char *s, int i)
{
	int k = strlen(s);

	if (i < k)
	{
		rev(*s, i + 1);
		_putchar(s[i]);
	}
}
void _print_rev_recursion(char *s)
{
	return (rev(*s, 0));
}
