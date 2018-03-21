/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** thomas.foubert@epitech.eu
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int len = my_strlen(dest);
	int i = 0;
	char *temp = malloc(sizeof(char) * (len + my_strlen(src)) + 1);

	for (; dest[i] != '\0'; i++)
		temp[i] = dest[i];
	for (i = 0; src[i]; i++)
		temp[len + i] = src[i];
	temp[len + i] = '\0';
	return (temp);
}
