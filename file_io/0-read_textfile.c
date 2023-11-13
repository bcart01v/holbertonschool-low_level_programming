#include "main.h"

/**
 * read_textfile - pass on a text file and this function will print it.
 * @filename: The file we're printing
 * @letters: The number of letters we're printing.
 * Return: a 0 if failed, the count if no fail.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = (char *)malloc(sizeof(char) * letters);
	int thefile = open(filename, O_RDONLY);
	ssize_t bytesread;
	ssize_t byteswritten;

	/* The following are failsafes. */
	if (filename == NULL)
	{
		return (0);
	}
	if (thefile == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(thefile);
		return (0);
	}
	/* If we made it here, there's a file to read! */
	/* this is both reading and counting what's being read. */
	bytesread = read(thefile, buffer, letters);
	if (bytesread == -1)
	{
		close(thefile);
		free(buffer);
		return (0);
	}
	/* Now we write, while also counting what's written. */
	byteswritten = write(STDOUT_FILENO, buffer, bytesread);
	if (byteswritten == -1 || byteswritten < bytesread)
	{
		bytesread = 0;
	}
	/* we're done, free up the memory and close the file (Not in that order)*/
	close(thefile);
	free(buffer);
	return (byteswritten);

}



/*Letters is the number of letters it should read and print*/
/*needs to return the actual number of letters it could read and print*/
/*if file can't be open or read, return 0*/
/*if filename is NULL, return 0*/
/*if write fails or doesn't write the expected amount of bytes, return 0*/
