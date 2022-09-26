#include "main.h"

/**
 * _memcpy() function copies n bytes from memory area src to memory area dest
 * @dest: memory area
 * @n: number of bytes to be copied
 * @src: memory area
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	for (i < n; i++)

	{
		dest[i] = src[i];
	}

	return (dest);
}
