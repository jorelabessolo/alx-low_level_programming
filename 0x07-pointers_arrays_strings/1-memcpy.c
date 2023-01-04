/*
 *File  : 1-memcpy.c
 *Auth: ABES
 */

#include "main.h"

/**
 * _memcpy -a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
	{
		destination[index] = source[index];
	}
	return (dest);
}
