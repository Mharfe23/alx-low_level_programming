#include <stdio.h>
#include <stdlib.h>
/**
 * main - add numbers
 * @argc: argc
 * @argc: argv
 * return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (j = 1; j < argc; j++)
	{
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
