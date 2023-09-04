#ifndef MOLeCULE_PUTCHAR
#define MOLeCULE_PUTCHAR

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
