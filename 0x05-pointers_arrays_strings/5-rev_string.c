#include "main.h"
/**
 * rev_string - reverse a string
 * @s:parametre
 */
void rev_string(char *s)
{
	int l = 0;
	char c;
	int i;
	char *s2 = s;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	s = s2;
	for (i = 0 ; i < l / 2; i++)
	{
		c = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = c;
	}
}
