#include <stdio.h>
#include <stdlib.h>

int bubbleIterative(int *arr, int size) {
	int i, j, aux;
	for (i = 0; i < (size-1); i++) {
		if (*(arr+j) > *(arr+(j+1))) {
			aux = *(arr+j);
			*(arr+j) = *(arr+(j+1));
			*(arr+(j+1)) = aux;
		}
	}
	return 0;
}

// void bubbleRecursive(int *arr, int size) {
// 	//TODO
// }

int main() {
	int *arr, size, i;

	printf("Enter the size of your array: ");
	scanf("%d", &size);

	arr = (int *)malloc(size * sizeof(int));

	printf("Enter the elements of your array: ");
	for(i = 0; i < size; i++) scanf("%d", (arr+i));

	bubbleIterative(arr, size);

	for(i = 0; i < size; i++) printf("%d", *(arr+i));
}
