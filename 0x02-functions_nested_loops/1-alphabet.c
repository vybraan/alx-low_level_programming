#include "main.h"
/**
 * main - Entry point.
 *
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 Success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
