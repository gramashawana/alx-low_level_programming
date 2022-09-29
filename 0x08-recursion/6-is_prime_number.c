#include "main.h"
#include <stdio.h>

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int n, int i)
{
	if (i <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / 1) < i)
		return (1);

	return (check_prime(n, i + 1));
