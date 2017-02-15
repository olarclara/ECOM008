## Notes on Bubble Sort algorithm

```
bubbleSort(A, v)
	for i = length[A] - 1 to 0
		for j = 0 to i
			if A[j] > A[j+1]
				swap(A[j], A[j+1])
```

Average performance: O(n^2)

Worst-case performance: O(n^2)

Best-case performance: O(n)

```
n + n-1 + n-2 + ... + 1 = (n * (n-1))/2 = O(n^2)
```
