#include "main.h"
#include <elf.h>
/**
 * print_magic - prints magic
 * @magic: the magic value
 * Return: void
 */
void print_magic(const unsigned char *magic)
{
	int i;

	printf("  Magic:   ");

	for (i = 0 ; i < EI_NIDENT; i++)
		printf("%02x ", magic[i]);

	printf("\n");
}

/**
 * print_ident_info - prints the class, data and version
 * @e_ident_class: holds the particlular class
 * @e_ident_data: data
 * @e_ident_version: prints the version
 * Return: void
 */
void print_ident_info(uint8_t e_ident_class,
		uint8_t e_ident_data, uint8_t e_ident_version)
{
	printf("  Class:                             %s\n",
			e_ident_class == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			e_ident_data == ELFDATA2LSB ? "2's compliment, little endian" :
			"2's complement, big endian");
	printf("  Version:                          %d (current)\n",
			e_ident_version);
}

/**
 * print_os_abi - prints OS ABI of the ELF file
 * @e_ident_osabi: particular OS ABI to be printed
 *
 * Return: void
 */
void print_os_abi(uint8_t e_ident_osabi)
{
	printf("  OS/ABI:                           ");
	switch (e_ident_osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - Sysytem V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("UNIX - ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) application\n");
			break;
		default:
			printf("<unknown: %02x>\n", e_ident_osabi);
	}
}

/**
 * print_elf_header_info - prints the information of the
 * ELF header of an ELF file
 * @elf_header: pointer the elf struct typr
 *
 * Return: void
 */
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
	printf("ELF Header:\n");
	print_magic(elf_header->e_ident);
	print_ident_info(elf_header->e_ident[EI_CLASS], elf_header->e_ident[EI_DATA],
			elf_header->e_ident[EI_VERSION]);
	print_os_abi(elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);
	printf("  Types:                             ");
	switch (elf_header->e_type)
	{
		case ET_NONE:
			printf("NONE (NO file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %d\n", elf_header->e_type);
	}
	printf("  Entry point address:               0x%lx\n", elf_header->e_entry);
}

/**
 * main - a program thst displays information contained
 * in the ELf header at the start of an ELF file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on succes always
 * Description: If the file is not anELF or
 * the function fails - exit code 98.
 */
int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	ssize_t valread;
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error opening the file\n");
		exit(98);
	}
	valread = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (valread != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error readind ELF header\n");
		exit(98);
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "File is not an ELF file\n");
		exit(98);
	}
	print_elf_header_info(&elf_header);
	close(fd);
	return (0);
}
