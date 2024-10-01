#include "bst.h"




void printInOrder(struct node* root) {
    if (root == NULL) return;
    
    printInOrder(root->left);
    printf("%d ", root->value);
    printInOrder(root->right);
}

void printPreOrder(struct node* root) {
    if (root == NULL) return;
    
    printf("%d ", root->value);
    printInOrder(root->left);
    printInOrder(root->right);
}

void printPostOrder(struct node* root) {
    if (root == NULL) return;
    
    printInOrder(root->left);
    printInOrder(root->right);
    printf("%d ", root->value);
}

// level order is in lab


int main(void) {


}
