#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr(n, 0));
}

/**
 * sqr - squar root of a number
 * @n: number to calculate the sauqre root of
 * @i: iterator
 * Return: result
 */

int sqr(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (sqr(n, i + 1));
	else
		return (-1);
}
