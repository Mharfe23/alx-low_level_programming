#include "main.h"
/**
 * _memset - memset function
 * @s: pointer
 * @b: char
 * @n: unsigned int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ss = s;

	while (i < n)
	{
		*ss = b;
		ss++;
		i++;
	}
	return (s);
}
