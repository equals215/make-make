/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** a function that displays the numbre given as parameter
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
	int n;

	if (nb <= -2147483647 || nb >= 2147483647)
		return (0);
	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		my_put_nbr(nb / 10);
	n = nb % 10;
	my_putchar(n + 48);
	return (0);
}
