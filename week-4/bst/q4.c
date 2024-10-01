#include "bst.h"



int bstCountOdds(struct node *t) {

    if (t == NULL) return 0;

    int leftOdds = bstCountOdds(t->left);
    int rightOdds = bstCountOdds(t->right);

    if (t->value % 2 == 1) {
        return leftOdds + rightOdds + 1;
    } else {
        return leftOdds + rightOdds;
    }

}

int main(void) {


}
