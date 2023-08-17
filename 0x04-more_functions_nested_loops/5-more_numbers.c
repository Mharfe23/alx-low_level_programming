#include "main.h"
/**
 * more_numbers - from 0 to 14 10 times
 * Return:
 */
void more_numbers(void)
{
	int i;
	int c;
	int k;

	while (i <= 10)
	{
		for (c = 48; c <= 57; c++)
		{
			_putchar(i);
		}
		for (k = 48; k <= 53; k++)
		{
			_putchar(10 + k);
		}
		_putchar('\n');
		i++;
	}
}
