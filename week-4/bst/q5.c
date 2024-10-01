#include "bst.h"

// Main Cases

// General Case, both children are not NULL
// Empty Case: Tree is NULL
// One child is NULL

int bstCountInternal(struct node *t) {
    if (t == NULL) return 0;
    if (t->left == NULL && t->right == NULL) return 0;

    return bstCountInternal(t->left) + bstCountInternal(t->right) + 1;

    // bstCountInternal(t->left)
    // bstCountInternal(t->right)


}


int main(void) {


}
