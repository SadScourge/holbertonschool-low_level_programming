#include <stdio.h>

/**
 * main - print the alphat twice
 *
 * Return: always 0
 */
int main(void)
{
	for (char ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
	for (char ch = 'A'; ch < 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
