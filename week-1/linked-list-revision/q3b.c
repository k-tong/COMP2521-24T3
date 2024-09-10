#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

struct node {
    int value;
    struct node *next;
};

struct list {
	struct node *head;
};

struct node* createNode(int val) {
	struct node* newNode = malloc(sizeof(struct node));
	newNode->value = val;
	newNode->next = NULL;
	return newNode;
}

struct list* createList() {
    struct list* newList = malloc(sizeof(struct list));
    newList->head = NULL;
    return newList;
}

void listInsert(struct list* list, int val) {
    assert(list != NULL);
	if (list->head == NULL) {
        list->head = createNode(val);
    }

	struct node* curr = list->head;
	while (curr->next != NULL) {
		curr = curr->next;
	}

	curr->next = createNode(val);
}

void printList(struct list* list) {
    for (struct node* curr = list->head; curr != NULL; curr = curr->next) {
        printf("%d -> ", curr->value);
    }

    printf("NULL\n");
}


// Implement a function to delete the first instance of a 
// value from a list, if it exists

// TODO: copy paste ListDelete Implementation 
// and try reimplementing it using new list representation 
// use ppt diagram


int main(int argc, char *argv[]) {

	// This code just creates a linked list from the input args
	struct list* list = createList();
	for (size_t i = 1; i < argc; ++i) {
		listInsert(list, atoi(argv[i]));
	}

    printList(list);

    while (true) {
        int number;
        printf("Enter a value to delete: ");
        scanf("%d", &number);
        listDelete(list, number);
        printf("new List: ");
        printList(list);
    }

	
	// this code will leak memory
}