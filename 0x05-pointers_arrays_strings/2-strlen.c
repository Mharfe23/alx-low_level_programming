#include "main.h"
/**
 * _strlen - whatever
 * @s:integer
 * Return: integer
 */
int _strlen(char *s)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; s[i] != '\0'; i++)
		sum++;
	return (sum);
}
