#include <stdio.h>
#define SIZEOF(Type) printf("Size of a " #Type ": %zu\n", sizeof(Type) + " byte(s)")
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	SIZEOF(int);
	SIZEOF(long);
	SIZEOF(long int);
	SIZEOF(long long);
	SIZEOF(float);
	/*printf("with proper grammar, but the outcome is a piece of art,\n");*/
	return (0);
}
