#include <stdlib.h>

#include "Set.h"

struct node {
    int val;
    struct node *next;
};

struct set {
    struct node *head;
};

// Creates a new empty set
Set SetNew(void) {
    Set s = malloc(sizeof(struct set));
    s->head = NULL;
    return s;
}

// Frees memory allocated to the set
void SetFree(Set s) {
    // TODO
}

// Inserts an element into the set
void SetInsert(Set s, int elem) {
    // TODO
}

// Deletes an element from the set
void SetDelete(Set s, int elem) {
    // TODO
}

// Returns true if the given element is in the set, and false otherwise
bool SetContains(Set s, int elem) {
    // TODO
    return false;
}

// Returns the number of elements in the set
int SetSize(Set s) {
    // TODO
    return 0;
}
