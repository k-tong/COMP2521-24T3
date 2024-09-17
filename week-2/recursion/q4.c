#include "linkedList.h"


// Write a recursive function to delete the 
// first instance of a value from a linked list,
// if it exists. The function should return a 
// pointer to the beginning of the updated list.
// remember to free!

// 1 -> 2 -> 3 -> 4 -> 5, delete 2
// keep current node 

// 2 -> 3 -> 4 -> 5

// another example: 1 -> 2 -> 3 -> 4 -> 5, delete 6

// Assumption:
// listDelete(rest of the list)  


// 1 -> 2 -> 3 -> 4 -> 5, delete 2
// 1 -> next = head of the rest of the list deleting the value
// l -> next = listDelete(1->next);
// listDelete(1->next) : remove 2, return 3->...
// 1 -> next = 3 -> ...

// delete a node with given value from a list
// and returns the new head
struct node *listDelete(struct node *l, int value) {
    // TODO:
    if (l == NULL) {
        return NULL;
    } else if (l->value != value) {
        l->next = listDelete(l->next, value);
        return l;
    } else {
        // we are at node to delete
        struct node* newHead = l->next;
        free(l);
        return newHead;
    }
}


int main(int argc, char *argv[]) {
    struct node* list = createListFromArguments(argc, argv);
    printList(list);
    while (true) {
        int number;
        printf("Enter a value to delete: ");
        scanf("%d", &number);
        list = listDelete(list, number);
        printf("new List: ");
        printList(list);
    }

    return 1;

}