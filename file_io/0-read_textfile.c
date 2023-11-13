#include "main.h"

/**
 * read_textfile - pass on a text file and this function will print it.
 * @filename: The file we're printing
 * @letters: The number of letters we're printing.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = (char *)malloc(sizeof(char) * letters);
	int thefile = open(filename, O_RDONLY);
	ssize_t bytesread = read(thefile, buffer, letters);
	ssize_t byteswritten = write(STDOUT_FILENO, buffer, bytesread);


	if (thefile == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(thefile);
		return (0);
	}
	if (bytesread == -1)
	{
		close(thefile);
		free(buffer);
		return(0);
	}

	if (byteswritten == -1 || byteswritten < bytesread)
	{
		bytesread = 0;
	}

	close(thefile);
	free(buffer);
	return byteswritten;
	
}



/*Letters is the number of letters it should read and print*/
/*needs to return the actual number of letters it could read and print*/
/*if file can't be open or read, return 0*/
/*if filename is NULL, return 0*/
/*if write fails or doesn't write the expected amount of bytes, return 0*/
