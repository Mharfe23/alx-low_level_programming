#include "main.h"
/**
 * print_triangle - as naame suggest
 * @size: our triangle size
 * Return:
 */
void print_triangle(int size)
{
	int i;
	int c;
	int k = size; 
	int l;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= size; c++)
		{
			for (k = size - c; k > 0;k--)
			{
				_putchar(' ');
			}
			for (l = 0; l <= c; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}	
