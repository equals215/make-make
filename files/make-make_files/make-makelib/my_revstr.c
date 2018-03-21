/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** a function that reverse a string
*/

char *my_revstr(char *str)
{
	int i = 0;
	int j = 0;
	char x;

	while (str[i] != '\0') {
		i++;
	}
	i = i - 1;
	while (i >= j) {
		x = str[j];
		str[j] = str[i];
		str[i] = x;
		i--;
		j++;
	}
	return (str);
}
