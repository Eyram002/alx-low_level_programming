#include <stdio.h>

/**
 * main - this function will display the alphabet in lowercase without q and e then adds a new line
 *
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}

