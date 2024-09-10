// Representation 1
struct node1 {
    int value;
    struct node1 *next;
};

// Representation 2
struct node2 {
    int value;
    struct node2 *next;
};

struct list {
    struct node2 *head;
    // can add more stuff here
};

// b : How is an empty list represented in each case?
// 1. NULL
// 2. a list struct which points to NULL


// c : What are the advantages of having a 
// separate list struct as in Representation 2?
// main advantage: 
// you can store metadata about other things
// but you have to keep them updated

// 2nd advantage:
// To point to the head of the list, you can just have a
// struct list *, functions which modify the list
// can now return void as the head of the list
// no longer changes
