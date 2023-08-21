#include "main.h"
/**
 * swap_int - first task
 * @a:integer
 * @b:integer also
 * @m: temporary integer
 * Retrun:
 */
void swap_int(int *a, int *b)
{
	int m;
	
	m = *a;
	*a = *b;
	*b = m;
}
