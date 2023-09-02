#include "main.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: char
 * @accept: accepted prefix
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int slen = 0;
	int accelen = 0;
	int i;
	int j;
	char *ss = s;
	char *aa = accept;

	while (*ss != '\0')
	{
		ss++;
		slen++;
	}
	while (*aa != '\0')
	{
		aa++;
		accelen++;
	}
	for (i = 0; i <= slen; i++)
	{
		for (j = 0; j <= accelen; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}

