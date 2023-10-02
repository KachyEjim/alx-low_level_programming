#include "main.h"

/**
 * read_textfile - a function that reads a text file
 *and prints it to the POSIX standard output.
 *
 * @filename: name of the file to be opened
 * @letters: the number of letters it should read and print
 *
 * Return: retuns the actual number of letters it
 * could read and print or 0 if failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rfile, wfile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	rfile = read(file, buffer, letters);
	if (rfile == -1)
		return (0);

	wfile = write(STDOUT_FILENO, buffer, rfile);
	if (wfile == -1)
		return (0);

	close(file);
	free(buffer);

	return (wfile);
}
