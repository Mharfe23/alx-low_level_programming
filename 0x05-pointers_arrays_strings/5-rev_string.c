#include "main.h"
/**
 * rev_string
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
	for (i = 0 ; i < l / 2; i++)
	{
		c = s[i];
		s[i] = s[l - i - 1]
		s[l - i - 1] = c
	}
}


