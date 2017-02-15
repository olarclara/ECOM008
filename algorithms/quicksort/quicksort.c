#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
	int aux;

	aux = *x;
	*x = *y;
	*y = aux;
}

int partition(int *arr, int p, int q) {
	int random = (rand() % (q - p + 1));
	swap((arr+(p+random)), (arr+q));

	int i = p - 1;
	for (int j = p; j <= q; j++) {
		if(*(arr+j) <= *(arr+q)) swap((arr+(++i)), (arr+j));
	}

	return i;
}

void quicksort(int *arr, int p, int q) {
	if(p < q) {
		int pivot = partition(arr, p, q);
		quicksort(arr, p, pivot-1);
		quicksort(arr, pivot+1, q);
	}
}

int main(void) {
	int *arr, size, i;

	printf("Enter the number of elements: \n");
	scanf("%d", &size);

	arr = (int *)malloc(size * sizeof(int));

	for(i = 0; i < size; i++) scanf("%d", (arr+i));

	printf("\nYour list before sort: ");
	for(i = 0; i < size; i++) printf("%d ", *(arr+i));

	quicksort(arr, 0, size-1);

	printf("\nYour list after sort: ");
	for(i = 0; i < size; i++) printf("%d ", *(arr+i));

	return 0;
}
