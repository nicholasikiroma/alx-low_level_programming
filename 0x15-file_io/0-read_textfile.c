#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * read_textfile - Reads a textfile and prints it to the Posix standard output
 * @filename: Pointer to file to be read
 * @letters: number of characters to read and print
 * Return: total number of characters in the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t lenR, lenW;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenR = read(fd, buffer, letters);
	close(fd);
	if (lenR == -1)
	{
		free(buffer);
		return (0);
	}
	lenW = write(STDOUT_FILENO, buffer, lenR);
	free(buffer);
	if (lenR != lenW)
		return (0);
	return (lenW);
}
