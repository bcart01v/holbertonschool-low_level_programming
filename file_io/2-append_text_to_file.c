#include "main.h"

/**
 * append_text_to_file - appends text passed into file.
 * @filename: The file
 * @text_content: The contents to write.
 * Return: 1 If it works, -1 if it doesn't.
*/

int append_text_to_file(const char *filename, char *text_content)
{

	int thefile;
	ssize_t written = 0, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	thefile = open(filename, O_WRONLY | O_APPEND);
	if (thefile == -1)
	{
		return (-1);
	}
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
