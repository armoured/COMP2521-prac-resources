/*
*  list.h
*  pracExam
*
*  Created by Richard Buckland on 1/12/11
*  CC-BY-SA
*
*  do not alter this file
*
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node *list;

typedef struct node {
   int   value;
   list  rest;
} node;

list newList(void);
list createNode(int val);
list append(list L, list n);
void printList(list L);
list deleteNode(list L);
list deleteSpecificNode(list L, int v);
list reverse(list L);
list merge(list L1, list L2);
list findLoop(list L);

