#include "bst.h"

// Assume I have
// bstNumNodes(t->left)
// bstNumNodes(t->right)


int bstNumNodes(struct node *t) {

    if (t == NULL) return 0;
    return bstNumNodes(t->left) + bstNumNodes(t->right) + 1;
    
}

// Time Complexity:
// How many times does my function get called?
// my function will get called on every single node once
// if there are n nodes,
// I call my function once for each node,
// each function does a constant amount of work
// Time complexity is O(n)



int main(void) {


}
