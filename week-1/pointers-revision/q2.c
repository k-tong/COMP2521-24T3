#include <stdlib.h>
#include <stdio.h>


// C is copy by value 
// (with the exception of array - though thats because
// arrays are just pointers)
// at start of function, we create 
// a local variable a with value set to a copy of whatever
// was passed when calling the function
void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
	// what we have done here is swap the values of the local
	// variable a and b
}

// Explain why the swap() function here does not work as intended:
// use diagram

int main(void) {
	int a = 5;
	int b = 7;
	swap(a, b);
	printf("a = %d, b = %d\n", a, b);
}

// Modify the code so that it works as intended. 
// Show how the new version works using a diagram.

// To fix, we must pass in pointers to a and b in main
// so that we can modify the values at those memory
// addresses

void swapCorrect(int *a, int *b) {
	//TODO:
}
