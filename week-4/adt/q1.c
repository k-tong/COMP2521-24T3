#include "Stack.h"

#include <stdlib.h>
#include <stdio.h>

// ADT: Abstract Data Type
// We have some data type defined by a set of functions
// we can use data type without knowing how its implemented
// we can easily change the underlying implementation of ADT
// without modifying any code which uses it

struct queue {
	Stack s1;
	Stack s2;
};

typedef struct queue *Queue;

Queue QueueNew(void) {
	Queue q = malloc(sizeof(struct queue));
	q->s1 = StackNew();
	q->s2 = StackNew();
	return q;
}

void QueueFree(Queue q) {
	StackFree(q->s1);
	StackFree(q->s2);
	free(q);
}

void QueueEnqueue(Queue q, int item) {
	// TODO
}

int QueueDequeue(Queue q) {
	// TODO
}