// Graph.c ... implementation of Graph ADT

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "Graph.h"

// type for small +ve int values
typedef unsigned char bool;
typedef int Item;

// graph representation (adjacency matrix)
typedef struct GraphRep {
	int    nV;    // #vertices
	int    nE;    // #edges
	bool **edges; // matrix of booleans
} GraphRep;


typedef struct QueueRep *Queue;
// set up empty queue
Queue newQueue(int);
// remove unwanted queue
void dropQueue(Queue);
// insert Item at back of queue
void QueueJoin(Queue,Item);
// remove Item from front of queue
Item QueueLeave(Queue);
// check whether queue is empty
int QueueIsEmpty(Queue);


typedef struct QueueRep {
   Item *item;  // array to hold Items
   int front;  // next Item to be removed
   int back;  // last Item added
   int nitems;  // # Items currently in queue
   int maxitems;  // size of array
} QueueRep;
// set up empty queue
Queue newQueue(int n)
{
   Queue q;
   q = malloc(sizeof(QueueRep));
   assert(q != NULL);
   q->item = malloc(n * sizeof(Item));
   assert(q->item != NULL);
   q->front = q->back = 0;
   q->nitems = 0; q->maxitems = n;
   return q;
}
// remove unwanted queue
void dropQueue(Queue q)
{
   assert(q != NULL);
   free(q->item);
   free(q);
}
// insert item on top of queue
void QueueJoin(Queue q, Item it)
{
   assert(q->nitems < q->maxitems);
   q->item[q->front] = it;
   q->nitems++;
   q->front = (q->front+1)%q->maxitems;
}
// remove item from front of queue
Item QueueLeave(Queue q)
{
   assert(q->nitems > 0);
   Item it = q->item[q->back];
   q->nitems--;
   q->back = (q->back+1)%q->maxitems;
   return it;
}
// check whether queue is empty
int QueueIsEmpty(Queue q)
{
   return (q->nitems == 0);
}


// validV ... check validity of Vertex
int validV(Graph g, Vertex v)
{
	return (g != NULL && v >= 0 && v < g->nV);
}

// mkEdge ... create an Edge value
Edge mkEdge(Graph g, Vertex v, Vertex w)
{
	assert(validV(g,v) && validV(g,w));
	Edge e; e.v = v; e.w = w;
	return e;
}

// newGraph ... create an empty graph
Graph newGraph(int nV)
{
	assert(nV > 0);
	int i, j;
	bool **e = malloc(nV * sizeof(bool *));
	assert(e != NULL);
	for (i = 0; i < nV; i++) {
		e[i] = malloc(nV * sizeof(bool));
		assert(e[i] != NULL);
		for (j = 0; j < nV; j++)
			e[i][j] = 0;
	}
	Graph g = malloc(sizeof(GraphRep));
	assert(g != NULL);
	g->nV = nV;  g->nE = 0;  g->edges = e;
	return g;
}

// readGraph ... read graph contents from file
static void readError()
{
	fprintf(stderr,"Bad graph data file\n");
	exit(1);
}
Graph readGraph(FILE *in)
{
	Graph g;
	char line[100];
	// get #vertices and create graph
	int nV = 0;
	if (fgets(line,100,in) == NULL) readError();
	if (sscanf(line,"%d",&nV) != 1) readError();
	if (nV < 2) readError();
	g = newGraph(nV);
	// read edge data and add edges
	Vertex v, w;
	while (fgets(line,100,in) != NULL) {
		sscanf(line,"%d-%d",&v,&w);
		insertE(g, mkEdge(g,v,w));
	}
	return g;
}

// showGraph ... display a graph
void showGraph(Graph g)
{
	assert(g != NULL);
	printf("# vertices = %d, # edges = %d\n\n",g->nV,g->nE);
	int v, w;
	for (v = 0; v < g->nV; v++) {
		printf("%d is connected to",v);
		for (w = 0; w < g->nV; w++) {
			if (g->edges[v][w]) {
				printf(" %d",w);
			}
		}
		printf("\n");
	}
}

// insertE ... add a new edge
void  insertE(Graph g, Edge e)
{
	assert(g != NULL);
	assert(validV(g,e.v) && validV(g,e.w));
	if (g->edges[e.v][e.w]) return;
	g->edges[e.v][e.w] = 1;
	g->edges[e.w][e.v] = 1;
	g->nE++;
}

// removeE ... delete an edge
void  removeE(Graph g, Edge e)
{
	assert(g != NULL);
	assert(validV(g,e.v) && validV(g,e.w));
	if (!g->edges[e.v][e.w]) return;
	g->edges[e.v][e.w] = 0;
	g->edges[e.w][e.v] = 0;
	g->nE--;
}

// nComponents ... number of connected components
int nComponents(Graph g)
{
	// TODO
        int forests = 0;
	return forests; // remove this line
}
