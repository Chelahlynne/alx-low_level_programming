#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Descriptio: prints all single digit number of base 10
 * starting from 0, followed by a new line
 * Return:0
 */
int main(void)
{
	char c = '2';

	while (c >= 'a')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
