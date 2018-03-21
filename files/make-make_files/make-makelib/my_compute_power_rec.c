/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** day05 task04
*/

int my_compute_power_rec(int nb, int p)
{
	double res = 0;

	if (p == 0)
		return (1);

	if (p < 0)
		return (0);

	if (res > 2147483647)
		return (0);

	res = nb * my_compute_power_rec(nb, p - 1);
	return (res);
}
