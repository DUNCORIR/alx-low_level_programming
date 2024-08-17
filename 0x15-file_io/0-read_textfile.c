#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @letters: The number of letters it should print and read.
 * @filename: The name of the text file to be written and read.
 *
 * Return: The actual number of letters it could read and print.
 * 0 if cannot be read or opened or NULL
 * or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead, bytesWritten;
	char *buffer;
	int fd;

	if (filename == NULL)
	{
		/*returns 0 if filename is NULL */
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		/* Return 0 if file cannot be opened */
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		/* return if memory allocation fails */
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		/*return 0 if reading fails */
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		close(fd);
		/* return 0 if writting fails  or doesn't write expected bytes */
		return (0);
	}

	free(buffer);
	close(fd);
	/* Return the no of bytes successfully read and writen */
	return (bytesWritten);
}
