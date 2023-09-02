#include <stdio.h>
/**
 * main - print argc
 * @argc: argc
 * @argv: argv
 * Return: int for argc
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
