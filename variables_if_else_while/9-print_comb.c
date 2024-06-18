#include <stdio.h>

/**
 * main - print digit 0 to 9
 *
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
