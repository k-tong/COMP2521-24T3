#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

// Modify the code below so that it allocates the struct on the heap, instead of the stack.
int main(void) {
	struct node n;
	n.value = 42;
	n.next = NULL;
}

// Modified:
// TODO: