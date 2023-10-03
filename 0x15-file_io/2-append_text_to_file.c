#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file.
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len;
	ssize_t wlen;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len])
		len++;
	wlen = write(file, text_content, len);

	close(file);
	if (wlen == -1)
		return (-1);
	return (1);
}
