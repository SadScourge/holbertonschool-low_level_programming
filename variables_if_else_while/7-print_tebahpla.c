#include <stdio.h>

/**
 * main - print the alphabet reversed
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
