#include "main.h"
/**
 * print_array - printing array
 * @a: array
 * @n: lenght of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
	}
}
