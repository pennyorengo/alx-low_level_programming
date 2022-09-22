#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that concartenates two strings
 * @dest: string that will be appended
 * @src: string to be concatenated on
 *
 * Return - Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{

int index = 0, dest_len = 0;

while (dest[index++])
		dest_len++;

	for (index = 0; scr[index]; index++)
		dest[dest_len++] = scr[index];

	return (dest);
}
