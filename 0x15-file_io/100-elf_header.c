#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * error_exit - Prints an error message and exits w specified code.
 * @exit_code: The exit code.
 * @message: The error message.
 */
void error_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * print_magic - Prints the ELF magic number.
 * @e_ident: Pointer to the ELF identification array.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
 * print_elf_header - Prints the ELF header information.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("  Class:			%u\n", header->e_ident[EI_CLASS]);
	printf("  Data:			%u\n", header->e_ident[EI_DATA]);
	printf("  Version:			%u\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:			%u\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:			%u\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:			%u\n", header->e_type);
	printf("  Entry point address:			%lx\n", header->e_entry);
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
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		error_exit(98, "Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit(98, "Error: Cannot open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		error_exit(98, "Error: Cannot read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
		error_exit(98, "Error: Not an ELF file");

	print_magic(header.e_ident);
	print_elf_header(&header);

	if (close(fd) == -1)
		error_exit(100, "Error: Can't close fd");

	return (0);
}
