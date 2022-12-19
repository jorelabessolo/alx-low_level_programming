#include "main.h"

/**
 * _outs - prints a string
 * @str: string to be printed
 * Return: Always 0
 */

void _puts(char *str)
{
	char *str;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
