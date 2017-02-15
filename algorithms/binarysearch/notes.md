## Notes on Binary Search algorithm

> The binary search algorithm divides a range of value into halves, and continues to narrow down the field of search until
> the unknown value is found. It's a classic "divide and conquer" algorithm.

```
binarySearch(A[], low, high, value)
	if high < low
		then return NULL
	mid = (low + high) / 2
	if A[mid] = value
		then return mid
	if A[mid] > value
		then return binarySearch(A[], 1, mid-1, value)
	else return binarySearch(A[], m+1, length[A], value)
```

Average performance: O(log n)

Worst-case performance: O(log n)

Best-case performance: O(1)

```
T(n) = T(n/2) + 1
T(n/2) = T(n/4) + 1 + 1
T(n/4) = T(n/8) + 1 + 1 + 1
...
T(n) = T(n/2^k) + k * 1

Since 2^k = n -> k = log(2,n)
T(n) = T(n/n) + log n * 1
		 = 1 + log n
```
