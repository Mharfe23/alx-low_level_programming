#include "main.h"
#include <stdio.h>
/*
 * print_alphabet - print alphabet a to z
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}


