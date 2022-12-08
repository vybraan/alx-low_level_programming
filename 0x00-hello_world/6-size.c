#include <stdio.h>
#define SIZEOF(con, Type) printf("Size of  "#con " " #Type ": %zu %s\n", sizeof(Type), " byte(s)")

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	SIZEOF(a, char);
	SIZEOF(an, int);
	SIZEOF(a,long);
	SIZEOF(a, long int);
	SIZEOF(a, long long);
	SIZEOF(a, float);
	return (0);
}
