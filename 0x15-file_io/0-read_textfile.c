#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

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

	buff = malloc(sizeof(*buff) * letters + 1);
	if (buff == NULL)
		return (0);

	rf = read(fd, buff, letters);
	if (rf == -1)
	{
		free(buff);
		return (0);
	}
	buff[letters] = '\0';
	while (buff[i] != '\0')
		i++;
	close(fd);
	write(STDOUT_FILENO, buff, i);
	free(buff);
	return (i);
}
