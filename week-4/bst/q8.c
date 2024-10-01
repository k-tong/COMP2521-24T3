#include "bst.h"



int bstCountGreater(struct node *t, int val) {
    if (t == NULL) return 0;
    else if (val >= t->value) {
        // everything in left subtree is smaller so we don't care
        return bstCountGreater(t->right, val);
    } else {
        return 1 + bstCountGreater(t->right, val);
    }

}

int main(void) {


}
