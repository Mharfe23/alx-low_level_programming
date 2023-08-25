#include "main.h"
/**
 * _strcmp - compare
 * @s1: char
 * @s2: char2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	char *p = s1;
	char *p1 = s2;

	while (*p != '\0' && *p1 != '\0')
	{	
		if (*p != *p1)
			break;
		else
			return (0);
		p++;
		p1++;
	}

	if (*s1 < *s2)
		return (-15);
	else if (*s1 > *s2)
		return (15);

	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 < *s2)
			return (-15);
		else if (*s1 > *s2)
			return (15);
	}
}

