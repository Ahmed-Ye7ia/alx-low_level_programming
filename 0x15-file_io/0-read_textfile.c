#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: name of file to read
 *@letters: number of letters to read
 *Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buff;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = read(fd, buff, letters);
	count = write(STDOUT_FILENO, buff, count);
	close(fd);
	return (count);
}
