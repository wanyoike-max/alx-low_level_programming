#include "main.h"
 /**
  * _strncat - concates two strings
  * @src: source odf the strings
  * @dest: destnation of the string
  * @n: length of int
  * Return: pointer to the string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	
	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] =  src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
