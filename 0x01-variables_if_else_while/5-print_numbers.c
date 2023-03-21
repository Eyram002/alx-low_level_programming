#include <stdio.h>

/**
 * main - displays all single digit numbers of base 10 starting from 0,
 * with by a new line
 * Return: Always 0 on Success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}

