#include "main.h"
/**
 * _memcpy - copy
 * @dest: char
 * @src: source
 * @n: unisgned int
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *d = dest;

	while (i < n)
	{
		*d = *src;
		d++;
		src++;
		i++;
	}
	return (dest);
}
