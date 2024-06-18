#include <stdio.h>

/**
 * main - print digit 0 to 9
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
