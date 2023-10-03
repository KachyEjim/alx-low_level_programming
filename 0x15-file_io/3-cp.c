#include "main.h"
#include <stdio.h>


/**
 * main - opies the content of a file to another file.
 *
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 *
 */

int main(int argc, char *argv[])
{
	int cpfrom, cpto, t, f;
	ssize_t rlen, wlen;
	mode_t p;
	char buffer[1024];

	error97(argc);
	cpfrom = open(argv[1], O_RDONLY);
	error98((ssize_t)cpfrom, argv[1], -1, -1);

	p = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	cpto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, p);
	error99((ssize_t)cpto, cpfrom, -1, argv[2]);

	rlen = 1024;
	while (rlen == 1024)
	{
		rlen = read(cpfrom, buffer, 1024);
		error98(rlen, argv[1], cpfrom, cpto);
		wlen = write(cpto, buffer, rlen);
		if (wlen != rlen)
			wlen = -1;
		error99(wlen, cpfrom, cpto, argv[2]);
	}
	t = close(cpto);
	f = close(cpfrom);
	error100(t, cpto);
	error100(f, cpfrom);

	return (0);
}


/**
 * error99 - checks that file_to was created and/or can be written to
 *
 * @check: checks if true of false
 * @file: file_to name
 * @cpfrom: file descriptor of file_from, or -1
 * @cpto: file descriptor of file_to, or -1
 *
 */

void error99(ssize_t check, int cpfrom, int cpto, char *file)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (cpfrom != -1)
			close(cpfrom);
		if (cpto != -1)
			close(cpto);
		exit(99);
	}
}

/**
 * error97 - checks for the correct number of arguments
 *
 * @n: number of arguments
 *
 */

void error97(int n)
{
	if (n != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * error98 - checks that file_from exists and can be read
 *
 * @check: checks if true of false
 * @file: copy_from name
 * @cpfrom: file descriptor of file_from, or -1
 * @cpto: file descriptor of file_to, or -1
 *
 */

void error98(ssize_t check, char *file, int cpfrom, int cpto)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (cpfrom != -1)
			close(cpfrom);
		if (cpto != -1)
			close(cpto);
		exit(98);
	}
}

/**
 * error100 - checks that file descriptors were closed properly
 *
 * @check: checks if true or false
 * @file: file descriptor
 *
 */

void error100(int check, int file)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
