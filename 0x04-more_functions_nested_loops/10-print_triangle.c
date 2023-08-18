#include "main.h"
/**
 * print_triangle - as naame suggest
 * @size: our triangle size
 * Return:
 */
void print_triangle(int size)
{
	int c;
	int k = size;
	int l;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= size; c++)
		{
			k = size - c;
			while (k > 0)
			{
				_putchar(' ');
				k--;
			}
			for (l = 0; l < c; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
