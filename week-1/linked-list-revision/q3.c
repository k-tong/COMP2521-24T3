#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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

void printList(struct node* list) {
    for (struct node* curr = list; curr != NULL; curr = curr->next) {
        printf("%d -> ", curr->value);
    }

    printf("NULL\n");
}


// Implement a function to delete the first instance of a 
// value from a list, if it exists

// 1. Test Cases
// 1 -> 2 -> 3 -> 4 -> NULL 
// 1. remove 3 from above
// 2. Edge Case: value not in List
// 3. Remove first value

//             curr
//         1 -> 2 -> 3 -> 4 -> NULL (remove 3)
// Result: 1 -> 2 -> 4 -> NULL

//         1 -> 2 -> 3 -> 4 -> NULL (remove 5)

struct node *listDelete(struct node *list, int value) {
    //TODO:
    if (list == NULL) {
        return NULL;
    } else if (list->value == value) {
        // remove first
        struct node* restOfList = list->next;
        free (list);
        return restOfList;
    } else {
        struct node *curr = list;
        while (curr->next != NULL) { 
            if (curr->next->value == value) {
                struct node* toRemove = curr->next;
                curr->next = toRemove->next;
                free(toRemove);
                break;
            }
                
            curr = curr->next;

        }

        return list;

    }


}

int main(int argc, char *argv[]) {

	// This code just creates a linked list from the input args
	struct node* list = NULL;
	for (size_t i = 1; i < argc; ++i) {
		list = listInsert(list, atoi(argv[i]));
	}

    printList(list);

    while (true) {
        int number;
        printf("Enter a value to delete: ");
        scanf("%d", &number);
        list = listDelete(list, number);
        printf("new List: ");
        printList(list);
    }
}