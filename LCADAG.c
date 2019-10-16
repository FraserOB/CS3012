#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *left, *right;
};

struct node *lcaDAG(struct node *root, int n1, int n2){
  if(root == NULL) return NULL;


}

struct node *findNode(struct node *root, int data){
  if(root == NULL) return NULL
  if(root -> data == data) return root;
  if(findNode(root -> left, data) != NULL) return findNode(root -> left, data);
  if(findNode(root -> right, data) != NULL) return findNode(root -> right, data);
  else return NULL;
}

struct node *newNode(int data){
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node -> data = data;
  node -> right = node -> left = NULL;
  return (node);
}
