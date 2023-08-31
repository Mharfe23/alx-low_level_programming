/**
 * devisor - number of divisor of a number
 * @n: number
 * @div: diviseur
 * Return: number of divisor
 */
int devisor(int n, int div)
{
	if (div < n && n % div == 0)
	{
		return (devisor(n, div + 1) + 1);
	}
	else if (div == n)
		return (1);
	else
		return (0);
}
/**
 * is_prime_number - prime checker
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (devisor(n, 1) > 2)
		return (0);
	else if (devisor(n, 1) = 2)
		return (1);
	else
		return (0);
}
