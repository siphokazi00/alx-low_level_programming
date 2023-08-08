#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * error_exit - Prints an error message and exits w/ specified code
 * @exit_code: The exit code.
 * @message: The error message.
 */
void error_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an error code.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_status;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file");

	while ((read_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write_status = write(fd_to, buffer, read_bytes);
		if (write_status == -1)
			error_exit(99, "Error: Can't write to file");
	}

	if (read_bytes == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd");
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd");

	return (0);
}
