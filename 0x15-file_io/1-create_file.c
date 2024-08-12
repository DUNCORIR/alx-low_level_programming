#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - Function that creates a file.
 * @filename: name of file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure,fails if file cannot be created,
 * or written, -1 for NULL filename. Create empty file for NULL text_content.
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	int len = 0;

	/* check if filename is null*/
	if (filename == NULL)
		return (-1);

	/* opening file with appropriate flags and permisssions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Handle text_content (write to file) */
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			/*length of text_content calculation*/
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* close the file */
	if (close(fd) == -1)
		return (-1);

	/*return success*/
	return (1);
}
