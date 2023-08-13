#include "main.h"

/**
 * append_text_to_file- gets input
 * @filename: stores input
 * @text_content: stores input
 * Return: results
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
		close(fd);
	}
	return (1);

}
