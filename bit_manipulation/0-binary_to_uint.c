#include "main.h"

/**
 *  binary_to_unit - Convert binary to an unsigned Int
 * @b: Pointer to the char we are converting
 * Return: The result, or 0 if failed
*/

unsigned int binary_to_uint(const char *b)
{
	/* we'll need the length and a counter to */
	/* traverse *b, as well as a place to save result */
	int getlen = strlen(b);
	int counter = 0;
	unsigned int result = 0;
	/* if it's null, we don't need to do anything*/
	if (b == NULL)
	{
		return (0);
	}
	/* move through b */
	for (counter = 0; counter< getlen; counter++)
	{
	/* have to make room for next in line */
	/* this was my issue. */
		result <<= 1;
		if (b[counter] == '1')
		{
			result += 1;
		}
		else if (b[counter] != '0')
		{
			return 0;
		}
	}
	return result;
}
