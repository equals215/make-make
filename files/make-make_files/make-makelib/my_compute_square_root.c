/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** Day05 task05
*/

int my_compute_square_root(int nb)
{
	int res = 1;
	int i = 1;

	if (nb == 1) {
		return (1);
	}
	if (nb == 0) {
		return (0);
	}
	while (nb != res) {
		i = i + 1;
		res = i * i;
		if (res > nb)
			return (0);
	}
	return (i);
}
