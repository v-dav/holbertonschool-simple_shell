#include "simple_shell.h"

/**
 * search_path1 - function that searches PATH1 environment variable
 * @environ: a table of strings containing all system environment variables
 *
 * Return: Returns 1 if PATH1 variable is found, 0 if not, -1 if there isn't
 * any system environment defined
 */

int search_path1(char **environ)
{
	int i = 0;
	char *token_name = NULL;
	char *temp = NULL;
	char *path1_name = "PATH1";

	if (environ && environ[0] != NULL)
	{
		while (environ[i] != NULL)
		{
			temp = strdup(environ[i]);
			token_name = _strtok(temp, "=");
			if ((_strcmp(token_name, path1_name)) == 0)
			{
				free(temp);
				return (1);
			}
			free(temp);
			i++;
		}
		return (0);
	}
	else
		return (-1);
}
