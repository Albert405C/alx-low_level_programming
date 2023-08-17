#include "main.h"

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number for which to compute the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function for computing square root.
 * @n: The number for which to compute the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int sqrt_helper(int n, int guess)
{
	if (n < 0)
		return (-1);
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (sqrt_helper(n, guess + 1));
}

