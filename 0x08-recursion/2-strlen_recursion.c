#include "main.h"
/**
 * _strlen_recursion - strlen
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	else
		return (1 + _strlen_recursion(s));
}
