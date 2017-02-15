## Notes on Selection Sort algorithm

> The selection sort algorithm which repeatedly identifies the smallest remaining unsorted element and puts it at the end of
> the sorted portion of the array.
> **(SKIENA, Algorithm Design)**

```
SelectionSort(int a[], int size)
	int i, j		// counters
	int min		  // index of smallest element

	for (i = 0; i < size; i++)
		min = i;
		for (j = i+1; j < size; j++)
			if (a[min] > a[j]) min = j;
		swap(&a[i], &a[j])
```

The outer loop executes _ times. The nested inner loop executes n-i-1 times, where i is the index of the outer loop.
Thus, the exact number of times the if statement is executed is given by:

```
S(n) = \sum_{i=0}^{n-1} \sum_{j=i+1}^{n-1} = \sum_{i=0}^{n-1} n-i-1
S(n) = (n-1) + (n-2) + (n-3) + ... + 2 + 1
S(n) ≈ n(n-1)/2

S(n) ≤ n(n-1) = O(n^2)
```

Average performance: _O(n^2)_.

Best-case performance: _O(n^2)_.

Worst-case performance: _O(n^2)_.
