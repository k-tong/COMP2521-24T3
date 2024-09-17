#include <stdbool.h>
#include <stdlib.h>
struct node {
	int value;
	struct node *next;
};

struct list {
	struct node *head;
};

// suppose these are solutions to earlier problems
int doListLength(struct node *l);
int doCountOdds(struct node *l);
bool doIsSorted(struct node *l);
struct node* doListDelete(struct node *l);

int listLength(struct list *l) {
    return doListLength(l->head);
}

int listCountOdds(struct list *l) {
	//TODO:
    return 0;
}

bool listIsSorted(struct list *l) {
	//TODO:
    return false;
}

// is there anything else I can change about this function?
void listDelete(struct list *l, int value) {
	doListDelete(l->head);
	// it is up to doListDelete to ensure the head
	// is correctly updated
	// a pointer to a struct list will always contain
	// a correct pointer to the head of the list
}