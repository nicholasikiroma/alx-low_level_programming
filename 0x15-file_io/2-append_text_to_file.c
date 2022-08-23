#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to write file
 * Return: 1 for success, -1 for error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fo = open(filename, O_WRONLY | O_APPEND);
	fw = write(fo, text_content, len);

	if (fo == -1 || fw == -1)
		return (-1);
	close(fo);
	return (1);
}
