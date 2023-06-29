#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first tstring to compare
 * @s2: second string to compare
 *
 * Return: < 0 if s1 is less than s2, 0 if equal
 * > 0 if s1 is > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
