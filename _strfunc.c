#include "simple_shell.h"

/**
 * _strcmp - function that compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: an int:
 * 0, if the s1 and s2 are equal;
 * a negative value if s1 is less than s2;
 * a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
	}

	if (s1[i] != s2[i])
		res = s1[i] - s2[i];

	return (res);
}

/**
 * _strlen - returns the length of a string
 * @s: a string
 *
 * Return: an integer, size of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: destination array (buffer)
 * @src: source array
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int i;

	while (src[t] != '\0')
		t++;
	for (i = 0; i <= t; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _strcatcp - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 *
 * Return: char pointer to a copy of dest string
 */
char *_strcatcp(char *dest, char *src)
{
	int dest_t = 0;
	int j = 0;
	char *dest_cp = NULL;

	dest_cp = malloc(sizeof(char) * (_strlen(dest) + _strlen(src) + 2));
	if (dest_cp == NULL)
		return (NULL);

	dest_cp = _strcpy(dest_cp, dest);

	while (dest_cp[dest_t])
		dest_t++;

	dest_cp[dest_t] = '/';

	while (src[j])
	{
		dest_t++;
		dest_cp[dest_t] = src[j];
		j++;
	}

	dest_cp[dest_t + 1] = '\0';

	return (dest_cp);
}
