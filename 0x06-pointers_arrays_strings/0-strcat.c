#include "main.h"
/**
 * *_strcat - concatenates
 * @dest: first
 * @src: second
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;
	char *d2 = dest;
	char *s = src;
	int lens = 0;
	int i;
	int lend = 0;

	while (*d != '\0')
	{
		d++;
		lend++;
	}

	while (*s != src)
	{
		s++;
		lens;
	}
	for (i = 0; i <= lens - 3; i++)
	{
		dest[i + lend - 2] = src [i];
	}
	return (d2);
}
