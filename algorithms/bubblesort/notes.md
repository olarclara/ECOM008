## Notes on Bubble Sort algorithm

```
bubbleSort(A, v)
	for i = 0 to length[A] - 1
		for j = 0 to length[A] - 1
			if A[j] > A[j+1]
				swap(A[j], A[j+1])
```

Average performance: O(n^2)

Worst-case performance: O(n^2)

Best-case performance: O(n)

```
n + n-1 + n-2 + ... + 1 = (n * (n-1))/2 = O(n^2)
```
