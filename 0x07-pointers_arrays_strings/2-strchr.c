#include "main.h"
/**
 * _strchr - locates
 * @s: string
 * @c: char to shearch for it
 * Return: char the pointer of the char
 * 
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
