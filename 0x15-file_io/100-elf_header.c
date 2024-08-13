#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
 * print error - Prints an error message to stderr and exits with code 98.
 * @messge: The error message to print.
 *
 * Description: function writes the specified error message to standard error
 * terminates the program with an exit status code of 98.
 */
void print_print(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Prints ELF header information.
 * @header: Pointer to ELF header structure.
 *
 * Description: prints the ELF header information including magic number,
 * class, data encoding, version, OS/ABI, ABI version, type, and entry
 *
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\nClass: %s\n",
		header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data: %s\n",
	header->e_ident[EI_DATA] == ELFDATA2LSB ?
	"2's complement, little endian"	: "2's complement, big endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: %lx\n", header->e_entry);
}

/**
 * main - Displays information contained in ELF header.
 * @argc: Argument.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 98 on error.
*/

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Cannot open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error: Cannot read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	print_error("Error: Not an ELF file");

	print_elf_header(&header);

	close(fd);
	return (0);
}
