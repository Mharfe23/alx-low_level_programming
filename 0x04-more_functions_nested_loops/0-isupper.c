#include "main.h"
/*
 *_isupper - thats my fonction
 *
 *Return: 1 if c is uppercase or 0 if otherwise

 *@c: the parametre of our function
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
