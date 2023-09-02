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
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	for (j = 0; j < argc; j++)
	{
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
