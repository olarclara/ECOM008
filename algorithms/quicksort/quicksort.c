#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
	int aux;

	aux = *x;
	*x = *y;
	*y = aux;
}

int pivot(int i, int j) { return((i+j)/2); }

void quicksort(int arr[], int m, int n) {
	int key, i, j, k;

	if(m < n) {
		k = pivot(m, n);
		swap(&arr[m], &arr[k]);

		key = arr[m];
		i = m+1;
		j = n;

		while(i <= j) {
			while((i <= n) && (arr[i] <= key)) { i++; }
			while((j >= m) && (arr[j] > key)) { j--; }

			if (i < j) { swap(&arr[i], &arr[j]); }
		}

		swap(&arr[m], &arr[j]);
		quicksort(arr, m, j-1);
		quicksort(arr, j+1, n);
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
