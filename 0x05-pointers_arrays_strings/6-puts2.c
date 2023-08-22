#include "main.h"
/**
 * puts2 - print chars
 * @str: our parameter
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
}
