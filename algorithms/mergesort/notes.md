## Notes on Merge Sort algorithm

Merge Sort is a classic divide-and-conquer algorithm. You can see a video on how it works [here](https://www.youtube.com/watch?v=XaqR3G_NVoo).

## Pseudocode
```
function mergesort (L: LIST; n: integer) : LIST;
	{L is a list of length n. A sorted version of L
	is returned. We assume n is a power of 2.}
	begin
		if n = 1 then
			return (L);
		else begin
			break L into two halves, L1 and L2, each of length n/2;
			return (merge(mergesort(L1, n/2), mmergesort(L2,n/2)));
		end
	end;		
```

## Analysis
Merge sort on just one element takes constant time. When we have n > 1 elements, we break down
the running time as follows.

*Divide*: computes the middle of the subarray, which takes constant time. Thus, _D(n) = O(1)_.

*Conquer*: we recursively solve two subproblems, each of size/2, which contributes _2T(n/2)_ to
the running time.

*Combine*: we have already notd that the merge procedure on a _n_-element subarray takes time _O(n)_,
and so _C(n) = O(n)_.

```
T(n) <= c if n = 1 or 2T(n/2) + c*n if n > 1
```

Average performance: _O(n log n)_.

Best-case performance: _O(n log n)_.

Worst-case performance: _O(n log n)_.
