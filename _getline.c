#include "simple_shell.h"

/**
 * _getline - gets a line from a stream
 * @line: a pointer to a malloced buffer for the line
 * @linesize: the capacity of that buffer
 * @stream: stream to read the line from
 *
 * Description: reads a line from stream, delimited by the newline character
 *
 * Return: return the number of characters written, excluding the terminating
 * NULL character. The value -1 is returned if an error occurs,
 * or -2 if end-of-file is reached.
 */
ssize_t _getline(char **line, size_t *linesize, FILE *stream)
{
	char buffer[128];
	size_t current_length, buffer_length;

	if (line == NULL || linesize == NULL || stream == NULL)
		return (-1);
	if (*line == NULL)
	{
		*linesize = sizeof(buffer);
		*line = malloc(*linesize);
		if (*line == NULL)
		{
			printf("Memory allocation error\n");
			return (-1);
		}
	}
	(*line)[0] = '\0';
	while (fgets(buffer, sizeof(buffer), stdin))
	{
		current_length = strlen(*line);
		buffer_length = strlen(buffer);
		/* Check line size and realocate memory if too long */
		if (current_length + buffer_length + 1 > *linesize)
		{
			*linesize *= 2;
			*line = realloc(*line, *linesize);
			if (*line == NULL)
			{
				printf("Memory reallocation error\n");
				free(*line);
				return (-1);
			}
		}
		strcat(*line, buffer);
		if ((*line)[strlen(*line) - 1] == '\n')
		{
			(*line)[strlen(*line) - 1] = '\0';
			return (strlen(*line));
		}
	}
	return (feof(stream) ? -2 : -1);
}
