#include <stdio.h>
#include <stdlib.h>

int linearIterative(int *arr, int size, int element) {
	int i;
	for (i = 0; i < size; i++) {
		if (*(arr+i) == element) return i;
	}
	return -1;
}

int linearRecursive(int *arr, int size, int element) {
	if (size < 0) { return -1; }
	if (*(arr+size-1) == element) { return size-1; }
	return linearRecursive(arr, size-1, element);
}

int main() {
	int *arr, size, element, i, iterativeOutput, recursiveOutput;

	printf("Enter the size of your array: ");
	scanf("%d", &size);

	arr = (int *)malloc(size * sizeof(int));

	printf("Enter the elements of your array: ");
	for(i = 0; i < size; i++) scanf("%d", (arr+i));

	printf("Enter the element you want to search: ");
	scanf("%d", &element);

	iterativeOutput = 0, recursiveOutput = 0;
	iterativeOutput = linearIterative(arr, size, element);
	recursiveOutput = linearRecursive(arr, size, element);

	printf("The element is found at position: %d.\n", iterativeOutput+1);
	return 0;
}
