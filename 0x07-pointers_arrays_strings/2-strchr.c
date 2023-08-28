#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates
 * @s: string
 * @c: char to shearch for it
 * Return: char the pointer of the cha
 */
char *_strchr(char *s, char c)
{
	char *s2 = s;

	while (*s2 != '\0')
	{
		if (*s2 == c)
		{
			return (s2);
		}
		s2++;
	}
	return (NULL);
}
