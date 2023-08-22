#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int lenght = 0;
	int i;

	while (str[lenght] != '\0')
		lenght++;

	if (lenght % 2 == 0)
	{
		for (i = lenght / 2; i < lenght; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (lenght - 1) / 2; i < lenght; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
