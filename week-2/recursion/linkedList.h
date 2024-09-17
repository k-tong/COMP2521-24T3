#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

// creates a new node with given value
struct node* newNode(int val);

// inserts node with value into a linked list
struct node* listInsert(struct node* list, int val);

// prints list for debugging
void printList(struct node* list);

// assumes correct format and all arguments are valid integers
struct node* createListFromArguments(int argc, char *argv[]);