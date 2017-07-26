/*
 * Sample Prac Question
 * Read the question sheet first
 *
 * Any questions email riyasat.saber@student.unsw.edu.au
 * but please ask your tutor first
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "BST.h"

// insert proper tests here
int main (int argc, const char * argv[]) {
  treelink t = NULL;
  t = insertTreeNode(t, 10);
  t = insertTreeNode(t, 6);
  t = insertTreeNode(t, 7);
  t = insertTreeNode(t, 8);
  t = insertTreeNode(t, 4);
  t = insertTreeNode(t, 15);
  t = insertTreeNode(t, 11);

  treelink s = NULL;
  s = insertTreeNode(s,1);
  s = insertTreeNode(s,2);
  s = insertTreeNode(s,3);
  s = insertTreeNode(s,4);
  s = insertTreeNode(s,5);
  s = insertTreeNode(s,6);

  treelink v = NULL;
  v = insertTreeNode(v,10);
  v = insertTreeNode(v,11);
  v = insertTreeNode(v,9);
  v = insertTreeNode(v,4);
  v = insertTreeNode(v,8);
  v = insertTreeNode(v,5);

  


  printf("isDegenerate Test...\n");
  assert(!isDegenerate(t));
  assert(isDegenerate(s));
  printf("PASSed!\n");

  printf("isBST Test...\n");
  assert(isBST(t));
  assert(isBST(s));
  assert(isBST(v));
  printf("PASSed!\n");

  removeTree(t);
  removeTree(s);
  removeTree(v);

  return 0;
}
