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
	if (error == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	exit(100);
}
/**
 * fd_error - saves space in main
 * @fd: - 1st or 2nd fd failed to free
 * @fd_value: fd value of failed free
 * Return: is void
 */

void fd_error(int fd, int fd_value)
{
	if (fd == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
	exit(100);
}

/**
 * main - copies the contents of an existing file to a new file
 * @argc: the number of args int the function call
 * @argv: an array of pointers to each function call
 * Return: errors and exits or the number of chars copied
 */

int main(int argc, char **argv)
{
	int fd1, fd2, wf, rf = 1, limit = 1024, count = 0, d1, d2;
	char *file1, *file2, *buffer[1024];

	if (argc != 3)
		error_handler(97, "");
	file1 = argv[1];
	file2 = argv[2];

	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
		error_handler(98, file1);

	fd2 = open(file2, O_CREAT | O_TRUNC | O_WRONLY,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		close(fd1);
		error_handler(99, file2);
	}

	while (rf)
	{
		rf = read(fd1, buffer, limit);
		if (rf == -1)
			error_handler(98, file1);
		wf = write(fd2, buffer, rf);
		if (wf == -1)
			error_handler(99, file2);
		count = count + rf;
	}

	d1 = close(fd1);
	d2 = close(fd2);
	if (d1 == -1)
		fd_error(1, fd1);
	if (d2 == -1)
		fd_error(2, fd2);
	return (count);
}
