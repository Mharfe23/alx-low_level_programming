#include "main.h"
/**
*_isdigit - thats my fonction
*
*Return: 1 if c is uppercase or 0 if otherwise
*
*@c: the parametre of our function
*
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
