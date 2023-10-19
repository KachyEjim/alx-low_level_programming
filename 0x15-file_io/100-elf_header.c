#include "elfile.h"



/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 *
 * @ac: The number of args
 * @argv: An array of pointers to the args.
 *
 * Return: 0 on success
 *
 */

int main(int ac, char *argv[])
{
	Elf64_Ehdr *h;
	int ofile, rfile;

	(void)ac;
	ofile = open(argv[1], O_RDONLY);
	if (ofile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		closeElf(ofile);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rfile = read(ofile, h, sizeof(Elf64_Ehdr));
	if (rfile == -1)
	{
		free(h);
		closeElf(ofile);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	checkElf(h->e_ident);
	printf("ELF Header:\n");
	printMagic(h->e_ident);
	printClass(h->e_ident);
	printData(h->e_ident);
	printVersion(h->e_ident);
	printOsabi(h->e_ident);
	printAbi(h->e_ident);
	printType(h->e_type, h->e_ident);
	printEntry(h->e_entry, h->e_ident);
	free(h);
	closeElf(ofile);
	return (0);
}


/**
 * checkElf - Checks if a file is an ELF file.
 *
 * @eIdent: A pointer to an array containing the ELF magic numbers
 *
 */

void checkElf(unsigned char *eIdent)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (eIdent[i] != 127 &&
		    eIdent[i] != 'E' &&
		    eIdent[i] != 'L' &&
		    eIdent[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}

}
/**
 * printMagic - Prints the magic numbers of an ELF header
 *
 * @e: A pointer to an array containing the ELF magic numbers.
 *
 */

void printMagic(unsigned char *e)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}



/**
 * printClass - Prints the class of an ELF header.
 *
 * @m: A pointer to an array containing the ELF class.
 *
 */

void printClass(unsigned char *m)
{
	printf("  Class:                             ");

	switch (m[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", m[EI_CLASS]);
	}
}

/**
 * printData - Prints the data of an ELF header.
 *
 * @e: A pointer to an array containing the ELF class.
 *
 */

void printData(unsigned char *e)
{
	printf("  Data:                              ");

	switch (e[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e[EI_CLASS]);
	}
}

/**
 * printVersion - Prints the version of an ELF header.
 *
 * @e: A pointer to an array containing the ELF version.
 *
 */

void printVersion(unsigned char *e)
{
	printf("  Version:                           %d",
	       e[EI_VERSION]);

	switch (e[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * printOsabi - Prints the OS/ABI of an ELF header.
 *
 * @e: A pointer to an array containing the ELF version.
 *
 */

void printOsabi(unsigned char *e)
{
	printf("  OS/ABI:                            ");

	switch (e[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
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
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e[EI_OSABI]);
	}
}

/**
 * printAbi - Prints the ABI version of an ELF header.
 *
 * @e: A pointer to an array containing the ELF ABI version.
 *
 */

void printAbi(unsigned char *e)
{
	printf("  ABI Version:                       %d\n",
	       e[EI_ABIVERSION]);
}

/**
 * printType - Prints the type of an ELF header.
 *
 * @type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 *
 */


void printType(unsigned int type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", type);
	}
}

/**
 * printEntry - Prints the entry point of an ELF header.
 *
 * @entry: The address of the ELF entry point.
 * @ident: A pointer to an array containing the ELF class.
 *
 */

void printEntry(unsigned long int entry, unsigned char *ident)
{
	printf("  Entry point address:               ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * closeElf - Closes an ELF file.
 *
 * @elf: The file descriptor of the ELF file.
 *
 */

void closeElf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
