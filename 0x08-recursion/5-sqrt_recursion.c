#include "main.h"
/**
 * _sqrt_recursion - guess all the numbers that maybe square roots
 * @guess: the variable that may be the natural square root of the number n
 * @n: integer
 *
 * second function
 *
 * sqrtguess - sqrt
 * @n: int
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
	return (sqrtguess(n, 1));
}
