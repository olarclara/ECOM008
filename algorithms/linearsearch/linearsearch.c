#include <stdio.h>
#include <stdlib.h>

int linearsearch(int *arr, int size, int element) {
	int i;
	for (i = 0; i < size; i++) {
		if (*(arr+i) == element) return i;
	}
	return -1;
}

int main() {
	int *arr, size, element, i;

	printf("Enter the size of your array: ");
	scanf("%d", &size);

	arr = (int *)malloc(size * sizeof(int));

	printf("Enter the elements of your array: ");
	for(i = 0; i < size; i++) scanf("%d", (arr+i));

	printf("Enter the element you want to search: ");
	scanf("%d", &element);

	i = 0;
	i = linearsearch(arr, size, element);

	printf("The element is found at position: %d.\n", i+1);
	return 0;
}
