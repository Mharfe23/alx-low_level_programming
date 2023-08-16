#include "main.h"
#include <stdio.h>

/*
 * print_alphabet_x10 - whatever
 */
void print_alphabet_x10(void)
{
	int i;
	int l;
	l=1;
	while(l < 11)
	{


		for (i = 97; i < 123; i++)

		{	
			_putchar(i);
		}
	l +=1;
	}
}
