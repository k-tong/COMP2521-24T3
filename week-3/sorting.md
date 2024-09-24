**Adaptive**: Takes advantage of the 'sortedness' of the input - it runs faster when partially sorted

**Stable**: Preserve order of items with same value

**Deterministic**: when a program runs the exact same lines of code when run multiple times with same
input

| Sort             | Sorted | Reverse | Random | Other | Adaptive? | Stable? |
|------------------|--------|---------|--------|-------|-----------|---------|
| **bubble**       |    O(n)    |    O(n^2)     |    O(n^2)    |    Special Case: O(n^2)   |     Yes      |    Yes     |
| **insertion**    |   O(n)     |     O(n^2)    |   O(n^2)     |   Special case: O(n)    |    Yes       |   Yes      |
| **select**       |   O(n^2)    |    O(n^2)    |   O(n^2)     |       |    No       |  no
**merge**        |    O (nlogn)    |    O(nlogn)     |  O(nlogn)      |       |     no      |    yes (if we merge from left)     |
| **naive quick**  |  O (n^2)     |    O(n^2)     |   O(nlogn)     |       |   no        |   no      |
| **mo3 quick**    |     O(nlogn)   |   O(nlogn)      |   O(nlogn)     |       |    no       |    no     |
| **random quick** |   O(nlogn)     |   O(nlogn)      |   O(nlogn)     |   not deterministic    |     no      |    no     |


Special Case refers to tutorial Lab 3 Q2 example
where we swap the first and last numbers of a sorted list

# Time Complexity Explanations

## Bubble Sort

n - 1 Comparisons / swaps in first iteration
n - 2 comparisons / swaps in second iteration
and so on..

n ( n - 1) / 2 = O(n^2)



## Insertion Sort

worst Case: similarly to bubble sort, O(n^2)

Special Test Case:
1 swap 2 comparisons for first n - 1 values
n - 1 swaps and comparisons to bring last value to front
3n - 3 + n - 1 = O(n)

## Selection Sort

n + (n - 1) + (n - 2) + ...
O(n^2)

## Merge Sort

## Quick Sort