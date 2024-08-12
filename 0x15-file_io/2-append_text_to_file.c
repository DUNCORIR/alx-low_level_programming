#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The file to append to
 * @text_content: The text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	int len = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file in write-only and append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, close file and return 1 */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	 /* Calculate the length of text_content */
	while (text_content[len])
		len++;


	/* Close the file descriptor and check for errors */
	if (close(fd) == -1)
		return (-1);

	return (1);
}
