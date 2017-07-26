// This program provides a collection of functions on Lists.
// The main program reads two sequences of numbers, terminated by
// zero.
// Each sequence is stored in a separate list.
// The zip function, which you need to implement, takes these two
// lists and produces a new list by zipping the lists together,
// n elements at a time, first from one list, then the other.
// The original lists should be preserved.
// Examples:
// zip(1, 1->2->3->4, 9->8->7->6) => 1->9->2->8->3->7->4->6
// zip(1, 1->2->3->4, 7->8->9)    => 1->7->2->8->3->9->4
// zip(2, 1->2->3->4, 9->8->7->6) => 1->2->9->8->3->4->7->6
// zip(3, 1->2->3->4, 6->7->8->9) => 1->2->3->6->7->8->4->9
// zip(5, 1->2->3->4, 5->6->7->8) => 1->2->3->4->5->6->7->8

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

list copy(list L) {
    list curr1 = L;
    list newCopy = newList();
    while (curr1 != NULL) {
        int val = curr1->value;
        list n = createNode(val);
        newCopy = append(newCopy, n);
        curr1 = curr1->rest;
    }
    return newCopy;
}

//zip list
list zip(int n, list L1, list L2) {
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


