#include <stdio.h>
#include <stdlib.h>

/*
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 }
 merge(A, 0, 4, 9)

  l           m              h
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 }

  i              j           
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 }

     i           j          
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 } tmp: [1]

     i              j          
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 } tmp: [1, 2]

     i                 j          
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 } tmp: [1, 2, 3]

        i              j          
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 } tmp: [1, 2, 3, 4]


        i                 j          
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 } tmp: [1, 2, 3, 4, 4]

...

                 i        j          
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 } tmp: [1, 2, 3, 4, 4, 5, 6, 7]

copy rest into tmp
			     i             j          
{ 1, 4, 5, 6, 7, 2, 3, 4, 7, 9 } tmp: [1, 2, 3, 4, 4, 5, 6, 7, 7, 9]

merging process: O(n) comparisons and copies into tmp array

*/


void merge(int A[], int lo, int mid, int hi) {
	int nitems = hi - lo + 1;
	int *tmp = malloc(nitems * sizeof(int));
	
	int i = lo;
	int j = mid + 1;
	int k = 0;
	
	// scan both segments into tmp

	// while we havent gone through all of the left list
	// and we haven't gone through all of the right list
	while (i <= mid && j <= hi) {
		if (A[i] <= A[j]) {
			tmp[k++] = A[i++];
			// tmp[k] = A[i];
			// k++;
			// i++;
		} else {
			tmp[k++] = A[j++];
		}
	}
	
	// copy items from unfinished segment
	while (i <= mid) tmp[k++] = A[i++];
	while (j <= hi)  tmp[k++] = A[j++];
	
	// copy items from tmp back to main array
	for (i = lo, k = 0; i <= hi; i++, k++) {
		A[i] = tmp[k];
	}
	free(tmp);
}
void mergeSort(int A[], int lo, int hi) {
	if (lo >= hi) return;
	
	int mid = (lo + hi) / 2;
	mergeSort(A, lo, mid);
	mergeSort(A, mid + 1, hi);
	merge(A, lo, mid, hi);
}
