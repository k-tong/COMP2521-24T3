#include "linkedList.h"
#include <stdbool.h>

// 1 2 3 4 5

// 1 2 3 5 4

// I am at the 1
// 1. rest of the list is sorted
// 2. start of next number is >= current number

// Assumption: I have listIsSorted(rest of the list)

// Base Case
bool listIsSorted(struct node *l) {
    //TODO:
    if (l == NULL) {
        return true;
    } else if (l->next == NULL) {
        return true;
    } else if (listIsSorted(l->next) && l->value <= l->next->value) {
        return true;
    }

    return false;
}

int main(int argc, char *argv[]) {
    struct node* list = createListFromArguments(argc, argv);
    
    if (listIsSorted(list)) {
        printf("Sorted!\n");
    } else {
        printf("Not Sorted!\n");        
    }

}