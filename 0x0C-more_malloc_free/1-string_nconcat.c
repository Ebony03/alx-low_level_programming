#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates s1 and n bytes of s2; return prt to string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: n bytes to concat from string 2
 *
 * Return: ptr to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int num, len, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);

	if (num >= strlen(s2))
		num = strlen(s2);

	len = strlen(s1) + num + 1;

	s = malloc(sizeof(*s) * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < num; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';

	return (s);
}
