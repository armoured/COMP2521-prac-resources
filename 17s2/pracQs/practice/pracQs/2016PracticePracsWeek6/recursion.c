

#include <stdio.h>
#include <stdlib.h>
#include "recursion.h"

//find a loop in a list and return the start of the loop
list findLoop(list L) {

    return NULL; //TODO

}

//recursively merge 2 lists
list merge(list L1, list L2) {

    //TODO
    return NULL;
}


//recursively reverse a list
list reverse(list L) {

    return NULL; //TODO
}

list newList(void) {

    list newL = malloc(sizeof(struct node));
    newL = NULL;
    return newL;

}

list createNode(int val) {
    list n = malloc(sizeof(struct node));
    n->value = val;
    n->rest = NULL;
    return n;
}

//recursively append a node to a list
list append(list L, list n) {
    return NULL; //TODO
}

//print a list recursively
void printList(list L) {

    //TODO

}

//recursively delete end node in a list
list deleteNode(list L) {
    //TODO
    return NULL;
}

//recursively delete a specific node in a list
list deleteSpecificNode(list L, int v) {

    return NULL; //TODO
}
