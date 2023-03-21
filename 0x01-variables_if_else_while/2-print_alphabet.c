#include <stdio.h>

/**
 * main -  this function will display an alphabet in lowercase
 * followed by a new line
 *
 * Return: Always 0 when successful
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}

