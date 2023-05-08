#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename to be created
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, letters, w = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1 || w == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		for (letters = 0; text_content[letters];)
			letters++;
	}

	w = write(fd, text_content, letters);

	close(fd);

	return (1);




}

