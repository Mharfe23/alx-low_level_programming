#include "main.h"
/**
 * print_numbers - print from 0 to 9
 * Return:void
 */
int print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i + '0');
	}
}
