#include "main.h"

/**
 * create_file - converst binary to unsigned int
 * @filename: binary string
 * @text_content: letters
 *
 * Return: conversion or zero is string is not in binary or null
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t _open, _write;

	if (filename)
	{
		_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (text_content)
			_write = write(_open, text_content, strlen(text_content));
		close(_open);
		if (_open != -1 && _write != -1)
			return (1);
	}
	return (-1);
}
