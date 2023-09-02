#include "main.h"
#include <string.h>
/**
 * _strcpy - whaatever
 * @dest: dest
 * @src: src
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int lsrc = strlen(src);

	for (i = 0; i <= lsrc; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
