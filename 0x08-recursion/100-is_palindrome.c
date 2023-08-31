#include "main.h"
#include <string.h>
char *reversestring(char *s)
{
	return rev(s, 0);
}
char *rev(char *s, int i)
{
	int k = strlen(s);
	char result[k];

	if (i < k)
	{
		rev(s, i + 1);
		result[i] = s[i];
	}
	return (result);
}
int equalstring(char *s, char *p, int i)
{
	int l = strlen(s);

	if (s[i] != p[i] && i < l)
	{
		return (0);
	}
	else if (s[i] == p[i] && i < l)
		return (equalstring(s, p, i + 1));
	else
		return (1);
}
/**
 * is_palindrome - string equal to it's reverse
 * @s: string
 * Return: 1 if it is 0 if not
 */
int is_palindrome(char *s)
{
	if (equalstring(s, reversestring(s), 0) == 1)
		return (1);
	else
		return(0);
}
