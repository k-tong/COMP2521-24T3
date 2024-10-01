#include "bst.h"


// edge case: key does not exist
int bstNodeLevel(struct node *t, int key) {

    if (t == NULL) return -1;
    if (t->value == key) return 0;
    if (key < t->value) {
        // search left
        int leftLevel = bstNodeLevel(t->left, key);
        if (leftLevel == -1) return -1;
        else return 1 + leftLevel;
    } else {
        // search right
        int rightLevel = bstNodeLevel(t->right, key);
        if (rightLevel == -1) return -1;
        return 1 + rightLevel;
    }
    // bstNodeLevel()

}



int main(void) {


}
