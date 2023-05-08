#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append.
 * @text_content: the NULL the NULL terminated string to add
 * at the end of the file
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	int w;
	int letters;

	if (!filename)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (letters = 0; text_content[letters];)
			letters++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, letters);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);






}

