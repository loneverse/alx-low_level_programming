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
    int file_descriptor, bytes_written;
    int text_length = 0;

    // If filename is NULL, return -1.
    if (filename == NULL)
        return (-1);

    // If text_content is not NULL, get its length.
    if (text_content != NULL)
    {
        for (text_length = 0; text_content[text_length]; text_length++)
            ;
    }

    // Open the file with the specified filename.
    // If the file already exists, truncate it.
    // Set the file permissions to rw-------.
    file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    if (file_descriptor == -1)
        return (-1);

    // Write the text_content to the file.
    bytes_written = write(file_descriptor, text_content, text_length);
    if (bytes_written == -1)
    {
        close(file_descriptor);
        return (-1);
    }

    // Close the file descriptor and return 1 to indicate success.
    close(file_descriptor);
    return (1);
}

