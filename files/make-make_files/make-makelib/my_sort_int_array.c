/*
** EPITECH PROJECT, 2017
** my_sort_int_array
** File description:
** thomas.foubert@epitech.com
*/

int heap_size;

void heapify(int *A, int i)
{
	int k = 2 * i + 1;
	int r = 2 * i + 2;
	int largest;

	if (k <= heap_size && A[k] > A[i])
		largest = k;
	else
		largest = i;
	if (r <= heap_size && A[r] > A[largest])
		largest = r;
	if (largest != i) {
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		heapify(A, largest);
	}
}

void build_heap(int *A, int size)
{
	int i;

	heap_size = size - 1;
	for (i = (size - 1) / 2; i >= 0; i--)
		heapify(A, i);
}

void my_sort_int_array(int *tab, int size)
{
	int i;
	int temp;

	build_heap(tab, size);
	for (i = size - 1; i > 0; i--) {
		temp = tab[heap_size];
		tab[heap_size] = tab[0];
		tab[0] = temp;
		heap_size--;
		heapify(tab, 0);
	}
}
