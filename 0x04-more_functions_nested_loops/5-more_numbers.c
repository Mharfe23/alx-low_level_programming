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
		
		_putchar('\n');
		i++;
	}
}
