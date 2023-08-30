#include "main.h"
/**
 * _pow_recursion - power
 * @x: value
 * @y: power
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (c);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}