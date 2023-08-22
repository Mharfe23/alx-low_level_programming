#include "main.h"
#include <stdio.h>
/**
 * print_array - printing array
 * @a: array
 * @n: lenght of the array
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		printf("%d", a[n - 1]);
		printf("\n");
	}
	else
		printf("\n");
}
