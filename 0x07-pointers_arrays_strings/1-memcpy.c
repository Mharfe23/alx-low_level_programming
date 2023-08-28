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

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (dest);
}
