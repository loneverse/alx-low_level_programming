#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the actual number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread;
	char buf[letters];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	nread = read(fd, buf, letters);
	if (nread == -1)
	{
		close(fd);
		return (0);
	}

	if (write(STDOUT_FILENO, buf, nread) != nread)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (nread);
}

