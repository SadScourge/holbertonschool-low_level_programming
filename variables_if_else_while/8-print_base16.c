#include <stdio.h>

/**
 * main - print digit 0 to F
 *
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch  <= 102; ch++)
	{
		if (ch == 58)
		{
			ch = 97;
		}
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
