#include <stdio.h>

/**
 * main - displays single digit numbers of base 10 from 0, with  a new line
 * Return: Always 0 on Success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

