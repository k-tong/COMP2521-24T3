#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int A[], int lo, int hi);


// split around a pivot and return the pivot index
// such that all values on left <= pivot
// and all values on right are >= pivot
// O(n)
int partition(int A[], int lo, int hi) {
	int pivot = A[lo];

	int l = lo + 1;
	int r = hi;
	while (true) {
		while (l < r && A[l] <= pivot) l++; 
		// keep incrementing l until it is at a number > pivot
		while (l < r && A[r] >= pivot) r--;
		// keep decrementing r until it is at a number < pivot
		if (l == r) break;
		swap(A, l, r);
	}

	if (pivot < A[l]) l--;
	swap(A, lo, l);
	return l;
}

/*
partition(A, 0, 9)   
  l                          hi
{ 5, 3, 9, 6, 4, 2, 9, 8, 1, 7 }

     l                       r
{ 5, 3, 9, 6, 4, 2, 9, 8, 1, 7 } pivot: 5

        l                 r
{ 5, 3, 9, 6, 4, 2, 9, 8, 1, 7 }

        l                 r
{ 5, 3, 1, 6, 4, 2, 9, 8, 9, 7 } (swap)

           l     r
{ 5, 3, 1, 6, 4, 2, 9, 8, 9, 7 }

           l     r
{ 5, 3, 1, 2, 4, 6, 9, 8, 9, 7 } (swap)

              l  r 
{ 5, 3, 1, 2, 4, 6, 9, 8, 9, 7 } // f (pivot < A[l]) l--;

              l  r 
{ 4, 3, 1, 2, 5, 6, 9, 8, 9, 7 } // swap first and pivot, return pivot

Time complexity

*/


void quickSort(int A[], int lo, int hi) {
	if (lo < hi) {
		int partionedIndex = partition(A, lo, hi);
		quickSort(A, lo, partionedIndex - 1);
		quickSort(A, partionedIndex, hi);
	}
}