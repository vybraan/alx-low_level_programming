#include "main.h"
/**
 * _pow_recursion - a power of to numbers, x power y
 * @y: int
 * @x: int
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y < -1)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
