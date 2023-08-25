#include "main.h"
/**
 * *string_toupper - uppercasing
 * Retrun: char
 * @str: string
 */
char *string_toupper(char * str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - 32;
	}
}
