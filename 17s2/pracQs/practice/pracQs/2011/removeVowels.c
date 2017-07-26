/*
*  removeVowels.c
*  comp1927 sample pracExam
*  write a function with the specified typesignature which
*  given a list of characters returns a pointer to the list with the
*  nodes containing lowercase vowels removed.
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

list removeVowels (list word);
list newList(void);
list createNode(int val);
node* deleteNode(node *curr, node *prev, list word);

// a sample stub non-working solution which compiles
// but does not pass the tests
//
// change anything you wish below here  
// and add any local static functions you wish
// your code must comply with the course
// style guide
//

list removeVowels (list word) {
    //TODO
   return NULL;
}

node* deleteNode(node *curr, node *prev, list word) {
     if (prev == NULL) {
         word = curr->rest;
         curr->rest = NULL;
        curr = word;
    } else {
          node* temp = curr;
         prev->rest = curr->rest;
          curr = curr->rest;
       temp->rest = NULL;
     }
     return prev;
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
