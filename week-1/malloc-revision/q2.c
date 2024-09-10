#include <stdlib.h>
// Explain how these two functions differ

void stackInt(void) {
	int a = 5; 
	// local variable - automatically allocated
	// on the stack
} // end of scope, where a is automatically deallocated

void heapInt(void) {
	int *a = malloc(sizeof(int));
	// a is a local variable pointer allocated on stack
	// we have allocated sizeof(int) = 4 bytes of memory on heap

	*a = 5;
} // end of scope - a is automatically deallocated
// the malloced piece of memory however has not been deallocated
// we are required to deallocate it ourselves
// this example causes us to 'leak' 4 bytes of memory
// since we did not free it
// see HeapInt Slide on Powerpoint 



int main(void) {
	stackInt();
    heapInt();
}
