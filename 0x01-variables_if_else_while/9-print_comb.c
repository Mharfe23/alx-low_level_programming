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

	for (i = 48; i <= 57 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
