#include "linkedList.h"

// students try!
// example: 1 -> 2 -> 3 -> 4 -> NULL
// 

// Assumption: 
// listCountOdd(rest of the list)
// 1 is an odd number
// 1 + listCount(rest of the list)

// Base Case:

// return amount of odd values in a linked list
int listCountOdds(struct node *l) {
    // TODO:
    if (l == NULL) {
        return 0;
    } else if (l->value % 2 == 1) {
        // odd number
        return 1 + listCountOdds(l->next);
    } else {
        // even number
        return listCountOdds(l->next);
    }
}

int main(int argc, char *argv[]) {
    struct node* list = createListFromArguments(argc, argv);
    printf("%d\n", listCountOdds(list));
    

}