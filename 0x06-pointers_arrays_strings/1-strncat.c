#include "main.h"
/**
 * _strncat - same as before but add n bytes limitation as a condition
 * @dest: first
 * @src: second
 * @n: n bytes limit
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int lend = 0;
	int src_bytes = 0;

	while (*dest != '\0')
	{
		dest++;
		lend++;
	}
	while (*src != '\0' && src_bytes < n)
	{
		dest[lend + 1] = *src;
		src++;
		src_bytes++;
		lend++;
	}
	dest[lend] = '\0';
	return (dest);
}
