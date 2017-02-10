#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}

void bubbleIterative(int *arr, int size) {
	int i, j;

	for(i = 0; i < (size-1); i++) {
		for(j = 0; j < (size-1); j++) {
			if(*(arr+j) > *(arr+(j+1))) swap((arr+j), (arr+(j+1)));
		}
	}
}

// void bubbleRecursive(int *arr, int start, int end) {
// 	// TODO
// }

int main(void) {
	int *arr, size, i;

	printf("Enter the size of your array: ");
	scanf("%d", &size);

	arr = (int *)malloc(size * sizeof(int));

	for(i = 0; i < size; i++) scanf("%d", (arr+i));

	printf("Your array before sorting is: ");
	for(i = 0; i < size; i++) printf("%d ", *(arr+i));

	bubbleIterative(arr, size);

	printf("\nYour array after sorting is: ");
	for(i = 0; i < size; i++) printf("%d ", *(arr+i));

	return 0;
}
