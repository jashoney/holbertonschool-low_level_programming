#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * read_textfile - reads a textfile and prints to POSIX standard output
 * @filename: the textfile
 * @letters: the number of letters that should be read and printed
 * Return: 0 if successful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rf, i = 0;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
		return (0);

	rf = read(fd, buff, letters);
	if (rf == -1)
	{
		free(buff);
		return (0);
	}
	buff[letters] = '\0';
	close(fd);

	while (buff[i] != '\0')
	{
		_putchar(buff[i]);
		i++;
	}
	_putchar('\n');
	free(buff);
	return (i);
}
