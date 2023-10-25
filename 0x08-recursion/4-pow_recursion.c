#include "main.h"
/**
 * _pow_recursion - returns the value of x rised to the power of y
 * @y: exponent
 * @x: power
 * Return: result of the expo
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
