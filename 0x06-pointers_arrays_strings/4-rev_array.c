#include "main.h"
/**
 * reverse_array - ll
 * @a: pointer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int count = 0;
	int i = 0;

	while (count < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
		count++;
	}
}
