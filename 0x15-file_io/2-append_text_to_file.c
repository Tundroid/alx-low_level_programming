#include "main.h"

/**
 * append_text_to_file - converst binary to unsigned int
 * @filename: binary string
 * @text_content: letters
 *
 * Return: conversion or zero is string is not in binary or null
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t _open, _write;

	if (filename)
	{
		_open = open(filename, O_WRONLY | O_APPEND);
		if (text_content)
			_write = write(_open, text_content, strlen(text_content));
		close(_open);
		if (_open != -1 && _write != -1)
			return (1);
	}
	return (-1);
}
