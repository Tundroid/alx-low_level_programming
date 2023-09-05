#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	ssize_t _open, _read, _open_to, _write_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_open = open(argv[1], O_RDONLY);
	_read = read(_open, buffer, 1024);
	_open_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (_open == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		_write_to = write(_open_to, buffer, _read);
		if (_open_to == -1 || _write_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		_read = read(_open, buffer, 1024);
		_open_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (_read > 0);

	close_file(_open);
	close_file(_open_to);

	return (0);
}

/**
 * close_file - Closes file descriptors.
 * @file: The file descriptor to be closed.
 */
void close_file(int file)
{
	int c = close(file);

	if (c == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", file);
		exit(100);
	}
}
