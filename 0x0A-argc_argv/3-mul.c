#include <stdio.h>
/**
 * main - multiply two numbers
 * @argc: number of parametre
 * @argv: argv
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		printf("%d\n", arg[1] * argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
