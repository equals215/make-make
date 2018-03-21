/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** yoyo
*/

int get_number(int j, double res, int stop_for, char const *str)
{
	int i = 0;
	int less_value = 0;

	for ( ; stop_for == 0; i++) {
		if ((str[i] > '9' || str[i] < '0') && (j != 0))
			stop_for++;
		if (str[i] == '-' && str[i + 1] <= '9' && str[i + 1] >= '0')
			less_value++;
		if ((res != 0) && (str[i] <= '9' && str[i] >= '0'))
			res = res * 10;
		if (str[i] <= '9' && str[i] >= '0') {
			res = res + str[i] - 48;
			j = j + 1;
		}
		if (res > 2147483647 || res < -2147483647)
			return (0);
	}
	if (less_value > 0)
		res = -res;
	return (res);
}

int my_getnbr(char const *str)
{
	double res = 0;
	int j = 0;
	int stop_for = 0;

	res = get_number(j, res, stop_for, str);
	return (res);
}
