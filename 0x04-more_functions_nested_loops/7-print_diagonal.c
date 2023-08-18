#inclue "main.h"
/**
 * print_diagonal - as montioned
 * @i:intiger
 * Return:
 */
void print_diagonal(int n)
{
	int i;
	int k = 0;
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (c = 0; c <= k; c++)
				_putchar(' ');
			k++;
			_putchar('\\');
		}
		_putchar('\n');
	}
}
