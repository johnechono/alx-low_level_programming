#include "main.h"

/**
 * read_textfile- Reads the text file and prints to STDOUT.
 * @filename: text file being read
 * @letters: letters to be read
 * Return: write actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, r, w;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
	{
		return (0);
	}

	if (!filename)
	{
		return (0);
	}
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	close(fd);
	free(buf);

	return (w);



}
