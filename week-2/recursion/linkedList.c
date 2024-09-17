#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

struct node* newNode(int val) {
	struct node* newNode = malloc(sizeof(struct node));
	newNode->value = val;
	newNode->next = NULL;
	return newNode;
}

struct node* listInsert(struct node* list, int val) {
	if (list == NULL) return newNode(val);

	struct node* curr = list;
	while (curr->next != NULL) {
		curr = curr->next;
	}

	curr->next = newNode(val);
	return list;
}

void printList(struct node* list) {
    for (struct node* curr = list; curr != NULL; curr = curr->next) {
        printf("%d -> ", curr->value);
    }

    printf("NULL\n");
}

struct node* createListFromArguments(int argc, char *argv[]) {
    struct node* list = NULL;
	for (size_t i = 1; i < argc; ++i) {
		list = listInsert(list, atoi(argv[i]));
	}
    return list;
}
