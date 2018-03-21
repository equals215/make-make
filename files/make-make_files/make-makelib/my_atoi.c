/*
** EPITECH PROJECT, 2017
** my_atoi.c
** File description:
** my_atoi.c
*/

int my_atoi(char *str)
{
	int nb;

	nb = 0;
	while (*str) {
		if (*str >= '0' && *str <= '9') {
			nb *= 10;
			nb += *str - '0';
		} else
			return (nb);

		str++;
	}
	return (nb);
}
