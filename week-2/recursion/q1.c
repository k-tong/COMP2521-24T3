#include "linkedList.h"
#include <stdio.h>

// 1 -> 2 -> 3 -> NULL
//  listLength(rest of the list)
// 1 + rest of List
// Assumption: I know the length of the rest of the list

// listLength ( 1-> 2 -> 3 -> NULL)
// return 1 + listLength(2 -> 3 -> NULL)
// return 1 + (1 + listLength (3 -> NULL))
// return 1 + (1 + 1)


int listLength(struct node *list) { 
    if (list == NULL) return 0;

    return 1 + listLength(list->next);
}

int main(int argc, char *argv[]) {
    struct node* list = createListFromArguments(argc, argv);
    printf("%d\n", listLength(list));

}