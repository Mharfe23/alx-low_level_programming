#include "main.h"
/**
 * largest_number - returns
 * @a: first
 * @b: second
 * @c: third
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (a > b && b < c)
	{
		if (a > c)
			largest = a;
		else
			largest = c;
	}

	return (largest);
}
