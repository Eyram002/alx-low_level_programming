#include <stdio.h>

/**
 * main - writes the lowercase alphabet in reverse, with a new line
 * Return: Always 0 when successful
 */
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}

