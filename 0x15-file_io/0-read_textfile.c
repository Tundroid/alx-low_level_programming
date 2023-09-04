#include "main.h"

/**
 * read_textfile - converst binary to unsigned int
 * @filename: binary string
 * @letters: letters
 *
 * Return: conversion or zero is string is not in binary or null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _read, _write;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (filename && buffer)
	{
		_open = open(filename, O_RDONLY);
		_read = read(_open, buffer, letters);
		_write = write(STDOUT_FILENO, buffer, _read);
		free(buffer);
		if (_open != -1 && _read != -1 && _write != -1 && _read == _write)
			return (_write);
	}
	close(_open);
	return (0);
}
