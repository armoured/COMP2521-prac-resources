// This program provides a collection of functions on Lists.
// The main program reads a sequence of numbers from stdin
// and stores them consecutively in a list.
// The partition(L,n) function, which you need to write,
// takes this list and creates a new list which contains
// all nodes from the original list whose value <= n
// The original list is modified so that its nodes only
// contain values > n
// In other words some nodes are removed from the original
// list to form the new list.
// Note the original ordering of items must be preserved.
// Example:
// L1 = 1->4->3->6->5->2->7
// partition(L1, 3)
// L1 (modified) = 4->6->5->7
// returned list = 1->3->2

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

list partition(list L, int n) {
    return NULL; //TODO
}


list newList(void) {
    list new = malloc(sizeof(struct node));
    new = NULL;
    return new;
}

list createNode(int val) {
    list n = malloc(sizeof(node));
    n->rest = NULL;
    n->value = val;
    return n;
}

list append(list L, list n) {
    //printf("%d", n->value);
    list curr = L;
    if (L == NULL) {
        L = n;
    } else {
        while (curr->rest != NULL) {
            curr = curr->rest;
        }
        curr->rest = n;
    }
    return L;
}

void printList(list L) {
    list curr = L;
    while (curr != NULL) {
        printf("%d->",curr->value);
        curr = curr->rest;
    }
    printf("X\n");
}

void deleteNode(list L) {
    list curr = L;
    list prev = NULL;
    while (curr->rest != NULL) {
        if (prev == NULL) {
            prev = L;
        } else {
            prev = curr;
        }
        curr = curr->rest;
    }
    if (prev != NULL) {
        prev->rest = NULL;
    }
    free(curr);
    curr = NULL;
}


