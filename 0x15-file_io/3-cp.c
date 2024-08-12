#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print an error message and exit with a given code.
 * @message: The error message format string.
 * @exit_code: The exit code to return.
 * @filename: The filename to include in the error message (or NULL).
 */
void print_error(const char *message, int exit_code, const char *filename)
{
	if (filename)
		dprintf(STDERR_FILENO, message, filename);
	else
		dprintf(STDERR_FILENO, "%s", message);
	exit(exit_code);
}

/**
 * main - Copy the contents of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 * Return: 0 on success, exits with an error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	/* Checks for number of arguments */
	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", 97, NULL);
	}

	/*open source file for editing */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file %s\n", 98, argv[1]);
	}

	/* open destination file for writting */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		print_error("Error; cant write to file %s\n", 99, argv[2]);
	}

	/*Copy data in chunks from source to destination */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		{
		if (bytes_written != bytes_read)
			print_error("Error: Can't write to file %s\n", 99, argv[2]);
		}
	}

	/*Check for read errors */
	if (bytes_read == -1)
	{
		 print_error("Error: Can't read from file %s\n", 98, argv[1]);
	}

	 /* Close file descriptors and handle errors */
	 if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		 print_error("Error: Can't close fd %d\n", 100, NULL);
	}

	 return (0);
}
