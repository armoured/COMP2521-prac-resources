// This program provides a collection of functions on Lists.
// The main program reads a sequence of numbers from stdin
// and stores them consecutively in a list.
// The slice(L,m,n) function, which you need to implement,
// takes this list and produces a new list containing the
// m'th to the n'th elements in the original list. Assume
// that the list is indexed from 0..length-1. As far as
// the values of m and n are concerned ...
// if m > n, return an empty list
// if both m and n are outside the range 0..length-1
//  return an empty list
// if m < 0 and n >= 0, start m from 0
// if n > length-1, stop at the end of the list
// The slice() function should preserve the original list.
// Example: slice(1->2->3->4,1,2) ==> 2->3


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "splice.h"

int length(list L) {
    int len = 0;
    list curr = L;
    while (curr != NULL) {
        curr = curr->rest;
        len++;
    }
    return len;
}

//cut out a list in between the values of m to n and return the
//spliced list
list splice(list L, int m, int n) {
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


