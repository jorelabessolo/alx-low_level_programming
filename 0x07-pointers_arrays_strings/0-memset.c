#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @c: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int i = 0;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
	{
		memory[i] = value;
	}
	return (memory);
}
