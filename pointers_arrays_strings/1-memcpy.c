#include "main.h"

/**
* *_memcpy - Copies n bytes
* @dest: Destication
* @src: The Source
* @n: An Int
* BJC - 2023-10-04
*/

char *_memcpy(char *dest, char *src, unsigned int n) 
{
/**
 * the _memcpy function copies n bytes from 
 * memory area to src, to memory area dest
 * returns a pointer to dest
 */	
	while (n--) {
		*dest = *src;
		dest++;
		src++;
	}
return (dest);
}
