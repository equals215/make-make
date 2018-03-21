/*
** EPITECH PROJECT, 2017
** my_find_prime_sup
** File description:
** thomas.foubert@epitech.eu
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
	if (nb > 2 && nb % 2 == 0)
		nb += 1;
	for (; my_is_prime(nb) == 0; nb += 2);
	return (nb);
}
