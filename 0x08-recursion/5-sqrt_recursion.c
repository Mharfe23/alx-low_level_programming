#include "main.h"
/**
 * _sqrt_recursion - sqrt
 * @n: integer
 * Return: inte
 */
int sqrtguess(int n, int guess)
{
	if (guess * guess < n)
		return (sqrtguess(n, guess + 1));
	else if (guess * guess > n)
		return (-1);
	else
		return (guess);
}



int _sqrt_recursion(int n)
{
	return (sqrtguess(n, 1);
}
