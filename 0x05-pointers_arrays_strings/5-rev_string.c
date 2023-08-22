#include "main.h"
/**
 * rev_string - reverse a string
 * @s:
 */
void rev_string(char *s)
{
	int l = 0;
	char c;
	int i;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	l--;
	char T[l];

	for (i = 0 ; i < l / 2; i++)
	{
		c = s[i];
		T[i] = s[l - i - 1];
		T[l - i - 1] = c
	}
	for (i = 0; i < l; i++)
		s[i] = T[i];
}
