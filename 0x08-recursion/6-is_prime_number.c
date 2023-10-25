#include "main.h"
/**
 * is_prime_number - return 1 if its prime else 0
 * @n: number
 * Return: result
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - calculate the prime
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if prime, else 0
 */

int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (prime(n, i - 1));
}
