#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writen in file.
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fw, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (len = 0; text_content[len] != '\0'; len++)
		;
	fw = write(fd, text_content, len);
	if (fw == -1)
		return (-1);
	close(fd);
	return (1);
}
