#include "main.h"

/**
 * read_textfile - reads a text file and print the letter
 * @filename: filenames
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. It returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nr, nw;
	char *bu;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	bu = malloc(sizeof(char) * (letters));
	if (!bu)
		return (0);

	nr = read(f, bu, letters);
	nw = write(STDOUT_FILENO, bu, nr);

	close(f);

	free(bu);

	return (nw);
}
