#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * error_handler - prints a msg to std err
 * @error: which error msg to use
 * @filename: which file failed
 * Return: is void
 */

void error_handler(int error, char *filename)
{
	if (error == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (error == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
/**
 * fd_closer - saves space in main
 * @fd: - 1st or 2nd fd failed to free
 * Return: is void
 */

int fd_closer(int fd)
{
	int flag;

	flag = close(fd);
	if (flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
}

/**
 * main - copies the contents of an existing file to a new file
 * @argc: the number of args int the function call
 * @argv: an array of pointers to each function call
 * Return: errors and exits or the number of chars copied
 */

int main(int argc, char **argv)
{
	int fd1, fd2, wf, rf = 1, limit = 1024;
	char *file1, *file2, *buffer[1024];

	if (argc != 3)
		error_handler(97, "");

	file1 = argv[1];
	file2 = argv[2];

	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
		error_handler(98, file1);

	fd2 = open(file2, O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fd2 == -1)
	{
		fd_closer(fd1);
		error_handler(99, file2);
	}

	while (rf)
	{
		rf = read(fd1, buffer, limit);
		if (rf == -1)
			error_handler(98, file1);
		if (rf == 0)
			break;
		wf = write(fd2, buffer, rf);
		if (wf == -1)
			error_handler(99, file2);
	}

	fd_closer(fd1);
	fd_closer(fd2);
	return (0);
}
