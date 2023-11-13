#include "main.h"

/**
 * create_file - creates a file
 * @filename: Name of the file to create
 * @text_content: Null terminated string to write to the file.
 * Return: 1 If it worked, -1 if it failed.
*/

int create_file(const char *filename, char *text_content)
{
	int thefile;
	ssize_t length = 0, written = 0;

	/* Failsafes */
	if (filename == NULL)
	{
		return (-1);
	}
	/* open the file, create it, set permission */
	thefile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (thefile == -1)
	{
		return (-1);
	}
	/* if the content is not null, we continue*/
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		written = write(thefile, text_content, length);
		if (written != length)
		{
			close(thefile);
			return (-1);
		}
	}

	close(thefile);
	return (1);
}
