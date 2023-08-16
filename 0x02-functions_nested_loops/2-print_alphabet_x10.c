#include "main.h"


/*
 * print_alphabet_x10 - whatever t 10 ljhgslihgmezirhgazpirhaefgjeapogr
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int l;

	l = 1;
	while (l < 11)
	{


		for (i = 97; i < 123; i++)

		{
			_putchar(i);
		}
		_putchar('\n');
	l += 1;
	}
}
