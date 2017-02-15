## Notes on Bubble Sort algorithm

```
insertionSort(A, v)
	for i = 1 to length[A] - 1
		key = A[i]
		j = i-1
		while j >= 0 and A[j] > key
			A[j+1] = A[j]
			j = j - 1
		A[j+1] = key
```

Average performance: O(n^2)

Worst-case performance: O(n^2)

Best-case performance: O(n)
