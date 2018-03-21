/*
** EPITECH PROJECT, 2017
** my_itoa.c
** File description:
** thomas.foubert@epitech.eu
*/

char *my_revstr(char *str);

void my_itoa(int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	my_revstr(s);
}
