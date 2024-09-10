#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

struct node* createNode(int val) {
	struct node* newNode = malloc(sizeof(struct node));
	newNode->value = val;
	newNode->next = NULL;
	return newNode;
}

struct node* listInsert(struct node* list, int val) {
	if (list == NULL) return createNode(val);

	struct node* curr = list;
	while (curr->next != NULL) {
		curr = curr->next;
	}

	curr->next = createNode(val);
	return list;
}


// Write a function to sum the values in the list. 
// Implement it first using while and then using for

// Test Cases
// empty list
// one element: 3
// multiple elements: 

// 1 -> 2 -> 3 -> null

int sumList(struct node* listHead) {
	// TODO:
	int total = 0;
	// struct node* curr = listHead;

	// while (curr != NULL) {
	// 	total += curr->value;
	// 	curr = curr->next;
	// }

	for (struct node* curr = listHead; curr != NULL; curr = curr->next) {
		total += curr->value;
		// increment is called here
	}


	return total;
}



int main(int argc, char *argv[]) {

	// This code just creates a linked list from the input args
	struct node* list = NULL;
	for (size_t i = 1; i < argc; ++i) {
		list = listInsert(list, atoi(argv[i]));
	}

	printf("Sum: %d\n", sumList(list));
	
	// this code will leak memory
}