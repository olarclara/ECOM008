#include <stdio.h>
#include <stdlib.h>

int binaryIterative(int *arr, int size, int element) {
	int begin = 0, end = size - 1, middle;

	while (begin <= end) {
		middle = (begin + end) / 2;
		if (*(arr+middle) < element) {
			begin = middle + 1;
		} else if (*(arr+middle) > element) {
			end = middle - 1;
		} else return middle;
	}
	return -1;
}

int binaryRecursive(int *arr, int begin, int end, int element) {
	if (end >= begin) {

		int middle = (begin + end) / 2;

		if(*(arr+middle) == element) return middle;

		if(*(arr+middle) > element) return binaryRecursive(arr, begin, middle-1, element);

		if(*(arr+middle) < element) return binaryRecursive(arr, middle+1, end, element);
	}
	return -1;
}

int main() {
	int *arr, size, element, i, output, type;

	printf("Enter the size of your array: ");
	scanf("%d", &size);

	arr = (int *)malloc(size * sizeof(int));

	printf("Enter the elements of your array: ");
	for(i = 0; i < size; i++) scanf("%d", (arr+i));

	printf("Enter the element you want to search: ");
	scanf("%d", &element);

	output = 0;

	printf("Insert 1 for iterative approach or 2 for recurisve approach.\n");
	scanf("%d", &type);

	if (type == 1) output = binaryIterative(arr, size, element);
	if (type == 2) output = binaryRecursive(arr, 0, size, element);

	printf("The element is found at position: %d.\n", output+1);
	return 0;
}
