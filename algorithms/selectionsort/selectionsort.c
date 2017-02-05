#include <stdio.h>
#include <stdlib.h>

void selectionIterative(int *arr, int size) {
	int i, j, aux;

	for(i = 0; i < size; i++) {
		for(j = i+1; j < size; j++) {
			if (*(arr+i) > *(arr+j)) {
				aux = *(arr+j);
				*(arr+j) = *(arr+i);
				*(arr+i) = aux;
			}
		}
	}
}

// void selectionRecursive(int *arr, int size) {
// 	//TODO
// }

int main() {
	int *arr, size, i;

	printf("Enter the size of your array: ");
	scanf("%d", &size);

	arr = (int *)malloc(size * sizeof(int));

	printf("Enter the elements of your array: ");
	for(i = 0; i < size; i++) scanf("%d", (arr+i));

	selectionIterative(arr, size);

	for(i = 0; i < size; i++) printf("%d", *(arr+i));
}
