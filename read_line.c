<<<<<<< HEAD
#include "holberton.h"
=======
#include "main.h"
>>>>>>> af8d59c52612e86f12ffc7d8765e8a633c77e085

/**
 * read_line - reads the input string.
 *
 * @i_eof: return value of getline function
 * Return: input string
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
