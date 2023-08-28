#include "main.h"
/**
 * _memset - memset
 * @s: pointer
 * @b: char
 * @n: unsigned int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (s);
}
