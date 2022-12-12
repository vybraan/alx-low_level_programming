#include <stdio.h>

/**
 * main - takes the string of aphabet and prints
 * all one by one in a loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char base16[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
		putchar(base16[i]);
	putchar('\n');

	return (0);
}
