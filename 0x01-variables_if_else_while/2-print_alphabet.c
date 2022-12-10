#include <stdio.h>

/**
 * main - takes the string of aphabet and prints
 * all one by one in a loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i = 0; i < 26; i++)
		putchar( alphabet[i]);
	putchar('\n');

	return (0);
}
