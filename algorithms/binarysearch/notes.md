## Notes on Binary Search algorithm

```
binarySearch(A, p, q, v)
	if q < p
		then return NULL
	m < p + [(p-q)/2]
	if A[m] = v
		then return m
	if A[m] > v
		then return binarySearch(A, 1, m-1, v)
	else return binarySearch(A, m+1, length[A], v)
```

Average performance: O(log n)

Worst-case performance: O(log n)

Best-case performance: O(1)
