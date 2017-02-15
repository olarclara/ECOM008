## Algorithms and Complexity - Questions

### 1. Show, by definition, that _f(n) = 2n^2 + 3n + 4_ is _O(n^2)_.

```
2n^2 + 3n + 4 <= cn^2
_c = 5 and n0 = 2_
2*(2^2) + 3*2 + 4 <= 5*(2^2)
18 <= 20
```

### 2. Show, by definition, that _f(n) = n^3_ isn't _O(n^2)_.

```
n^3 <= cn^2
_c = 5 and n0 = 5_: 125 <= 125
_c = 5 and n0 = 7_: 343 <= 245

As we grow the values of c and n, we can clearly see that n^3 <= cn^2 is false, thus _f(n) = n^3_ isn't _O(n^2)._
```

### 3. Show, by definition, that _2^(n+1)_ is _O(n^2)_.

```
2^(n+1) <= cn^2
(2*2^n <= cn^2) /(2^n)
2 <= c

Since there are values for c and n0 that make _2 <= c_ true, we can say that _2^(n+1)_ is _O(n^2)._
```

### 4. Write and solve the recurrence relation for the linear search algorithm.

```
Linear search has no recurrence relation.
```

### 5. Write and solve the recurrence relation for the binary search algorithm.

```
T(n) = T(n/2)+1
T(n/2) = T(n/4) + 1 + 1
T(n/4) = T(n/8) + 1 + 1 + 1
...
T(n) = T(n/2^k) + k*1

Given that _2^k = n -> k = log(2,k)_:

T(n) = T(n/n) + log(2,n) * 1 = 1 + log(2,n)

Thus, binary search is _O(log(2,n))._		
```

<!-- ### 6. Write and solve the recurrence relation for the quicksort algorithm.

```
T(n) = 2T(n/2) + n
T(n/2) = 2*(T(n/4)+n) + n
T(n/4) = 2*[2*(2*T(n/8)+n)+n] + n
...
T(n/k) = 2^k * n/(2^k) + k*n

Given that _2^k = n -> k = log(2,k)_:

T(n) = n*1 + log(2,n) * n = n + log(2,n) * n

This,
```

### 7. Show that _f(n) + g(n) = O(max{f(n),g(n)})_. -->

### 10. Write a function is Haskell which receives a list and returns the sum of every element of the list.

```
sum:: [int] -> int
sum [ ] = [ ]
sum (a:as) = a + sum[as]
```

### 11. Write a function in Haskell which receives a list and returns the product of every element of the list.

```
prod:: [int] -> int
prod [ ] = [ ]
prod (a:as) = a * prod[as]
```

### 12. Write a function in Haskell which receives two integers (base and exponent) and returns the power output.

```
pow:: [int] -> int
pow	n m
		n == 0 = 1
		n > - = m * pow(n-1, m)
```

### 13. Write a function in Haskell that given a list returns its size.

```
len:: [int] -> int
len [ ] = [ ]
len (a:as) = 1+len[as]
```
