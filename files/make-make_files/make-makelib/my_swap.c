/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** thomas.foubert@epitech.eu
*/

void my_swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
