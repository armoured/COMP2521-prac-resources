// PQueue.h ... interface to Priority Queue ADT
// Written by John Shepherd, May 2013

#ifndef PQUEUE_H
#define PQUEUE_H

#include "Item.h"

typedef struct PQueueRep *PQueue;

PQueue newPQueue(); // create new empty priority queue
void dropPQueue(PQueue); // free memory used by queue
void showPQueue(PQueue); // display as 3 > 5 > 4 > ...
void PQueueJoin(PQueue,Item,int); // add item on queue
Item PQueueLeave(PQueue); // remove item from queue
int PQueueIsEmpty(PQueue); // check for no items

#endif
