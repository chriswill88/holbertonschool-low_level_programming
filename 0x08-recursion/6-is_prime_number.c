#include "holberton.h"
/**
* _prim - find primes
* @n: the potential prime
* @i: the number to check
* Return: 1 or 0
*/
int _prim(int n, int i)
{
	if (n <= 1)
		return (0);
	if ((n % i) == 0)
	{
		return (0);
	}
	if (i > (n / 2))
		return (1);
	return (_prim(n, i + 1));
}

/**
* is_prime_number - checks if n is a prime number
* @n: the potential prime
* Return: 0 or 1
*/
int is_prime_number(int n)
{
	return (_prim(n, 2));
}
