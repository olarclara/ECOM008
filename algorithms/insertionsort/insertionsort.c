#include <stdio.h>
#include <stdlib.h>

void insertionIterative(int *A, int n) {
	int i, j, aux;
	for(i = 1; i < n; i++) {
		aux = *(A+i); // First element of unordered part;
		j = i - 1; // Index of last ordered element;

		while(*(A+j) > aux && j>= 0) {
			*(A+(j+1)) = *(A+j);
			j--;
		}
		*(A+(j+1)) = aux;
	}
}

int main() {
	int *arr, size, i;

	printf("Enter the size of your array: ");
	scanf("%d", &size);

	arr = (int *)malloc(size * sizeof(int));

	printf("Enter the elements of your array: ");
	for(i = 0; i < size; i++) scanf("%d", (arr+i));

	insertionIterative(arr, size);

	printf("Your ordenated array is: ");
	for(i = 0; i < size; i++) printf("%d ", *(arr+i));
}
