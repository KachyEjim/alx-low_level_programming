#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write
 * to the file
 *
 * Return: 1 on success, -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file, wfile;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1)
	{
		file = open(filename, O_CREAT | O_RDWR, 0600);
		if (file == -1)
			return (-1);
	}
	else
	{
		file = open(filename, O_TRUNC | O_RDWR);
		if (file == -1)
			return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	wfile = write(file, text_content, len);
	if (wfile == -1)
		return (-1);

	close(file);
	return (1);
}
