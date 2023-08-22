#include "main.h"
/**
 * print_array - printing array
 * @a: array
 * @n: lenght of the array
 */
void print_array(int *a, int n)
{
	for (; a < n; a++)
	{
		_putchar(a);
		_putchar(',');
		_putchar(' ');
	}
}
