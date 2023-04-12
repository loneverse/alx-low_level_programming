#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: -1 if failure else 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(fd, text_content, length);

	if (fd == -1 || bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}

