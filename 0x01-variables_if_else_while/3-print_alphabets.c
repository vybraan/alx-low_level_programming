#include <stdio.h>
#include <ctype.h>

/**
 * main - takes the string of aphabet and prints
 * all one by one in a loop lowercase and upperacse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);
	for (i = 0; i < 26; i++)
		putchar(toupper(alphabet[i]));
	putchar('\n');

	return (0);
}
