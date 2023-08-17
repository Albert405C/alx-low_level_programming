#include "main.h"

/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Recursive helper function to check primality.
 * @n: The number to be checked.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (is_prime_helper(n, divisor + 1));
}

