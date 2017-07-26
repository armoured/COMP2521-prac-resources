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

typedef struct node *list;

typedef struct node {
   int   value;
   list  rest;
} node;
