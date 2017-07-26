// Tree.h ... interface to binary search tree ADT
// Written by John Shepherd, March 2013
// Modified by Mitchell Shelton July 2017
// More BST questions/functions added

// view of a Tree
typedef struct _tree *Tree;
typedef struct _node *Node;

// Items and operations on Items
typedef int Key;
typedef Key Item; // item is just a key


// create an empty Tree
Tree newTree();
// free memory associated with Tree
void dropTree(Tree);
// display a Tree and stats about Tree
void showTree(Tree);

// insert a new value into a Tree
void TreeInsert(Tree, Item);
// delete a value from a Tree
void TreeDelete(Tree, Key);
// check whether a value is in a Tree
int TreeFind(Tree, Key);
// compute depth of Tree
int TreeDepth(Tree);
// count #nodes in Tree
int TreeNumNodes(Tree);
// count #leafs in Tree
int countLeafs(Tree);
// delete largest value node in Tree
void deleteLargest(Tree);
// print Tree in prefix
void printPrefix(Tree);
// print Tree in postfix
void printPostfix(Tree);
// print Tree in infix
void printInfix(Tree);
// check if Tree is degenerate
int degenerate(Tree);
// print Tree
void showTree(Tree t);
// copy Tree
Tree copyTree(Tree t);
// turn Tree into a list
Tree treeToList(Tree t);
// print list version of Tree 
void printList(Tree t);
// check if Tree is a BST
int isBST(Tree t);
// delete value from the Tree
Tree deleteVal(Tree t, int value);



