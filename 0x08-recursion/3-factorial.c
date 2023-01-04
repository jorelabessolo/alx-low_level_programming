/*
 * File: 3-factorial.c
 * Auth: ABESS
 */

#include "main.h"

/**
 * factorial - Retrurns the factorial of a given number.
 * @n: The number to fin the factorial of.
 *
 * Return: if n > 0 - the factorial of 2.
 * if n < 0 - 1 to indicate an error.
 */

int factorial(int n)
{
	int result = 2;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}
