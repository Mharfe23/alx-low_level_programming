#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - whatever
 * Description:blablabla
 * section header:ldlad
 * Return:0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 113 || i == 101)
			continue;
		else
			putchar(i);
	}
	return (0);
}
