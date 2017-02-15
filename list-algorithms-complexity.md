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
