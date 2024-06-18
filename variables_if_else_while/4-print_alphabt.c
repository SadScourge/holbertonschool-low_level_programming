#include <stdio.h>

/**
 *main - print the alphabet except q and e
 *Return: always 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch < 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
