#include <stdio.h>
#include "main.h"

void close_file(int file);

/**
 * main - check the code
 * @argc: count
 * @argv: vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	ssize_t _open, _read, _open_to, _write_to;
	char buffer[1024];
	char *err_msgs[] = {"Usage: cp file_from file_to\n",
						"Error: Can't read from file %s\n",
						"Error: Can't write to %s\n",
						"Error: Can't close fd %d\n"};

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, err_msgs[0]);
		exit(97);
	}

	_open = open(argv[1], O_RDONLY);
	bzero(buffer, 0);
	_read = read(_open, buffer, 1024);
	_open_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (_open != -1 && _read != -1)
	{
	    _write_to = write(_open_to, buffer, _read);
		if (_open_to == -1 || _write_to == -1)
		{
			dprintf(STDERR_FILENO, err_msgs[2], argv[2]);
			exit(99);
		}
		bzero(buffer, 0);
		_read = read(_open, buffer, 1024);
		_open_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	if (_open < 0 || _read < 0)
	{
		dprintf(STDERR_FILENO, err_msgs[1], argv[1]);
		exit(98);
	}
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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
