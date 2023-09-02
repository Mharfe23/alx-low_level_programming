#include <stdio.h>
#include <stdlib.h>
/**
 * main - coin necessary
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main (int argc, char *argv[])
{
	int cent;
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
        {
                printf("0\n");
                return (0);
        }
	while (cent >= 25)
	{
		sum++;
		cent = cent / 25 + cent % 25;
	}
	while (cent >= 10)
	{
		sum++;
		cent = cent / 10 + cent % 10;
	}
	while (cent >= 5)
	{
		sum++;
		cent = cent / 5 + cent % 5;
	}
	while (cent >= 2)
	{
		sum++;
		cent = cent / 2 + cent % 2;
	}
	if (cent == 1)
		sum++;
	printf("%d", sum);
	return (0);
}
