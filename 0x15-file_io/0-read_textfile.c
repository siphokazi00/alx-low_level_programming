#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads and prints a text file to the POSIX stdout
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	if (letters < (size_t)bytes_read)
		bytes_read = letters;

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(fd);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
