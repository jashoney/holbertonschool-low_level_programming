#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file or truncates an existing file
 * @filename: the file
 * @text_content: the text to be used
 * Return: 1 if successful or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wf, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[i] != '\0')
		i++;

	wf = write(fd, text_content, i);
	if (wf == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
