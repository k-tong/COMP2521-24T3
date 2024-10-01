#include "bst.h"


int bstHeight(struct node *t) {

    if (t == NULL) return -1;

    int lHeight = bstHeight(t->left);
    int rHeight = bstHeight(t->right);

    // if (lHeight > rHeight) {
    //     return lHeight + 1;
    // } else {
    //     return rHeight + 1;
    // }

    return (lHeight > rHeight) ? lHeight + 1 : rHeight + 1;

}


int main(void) {


}
