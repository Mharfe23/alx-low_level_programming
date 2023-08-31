#include "main.h"
/**
 * sqrtguess - guess all the numbers that maybe square roots
 * @guess: the variable that may be the natural square root of the number n
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
/**
 * _sqrt_recursion - sqrt
 * @n: int
 * Return: sqrt root
 */
int _sqrt_recursion(int n)
{
	return (sqrtguess(n, 1));
}