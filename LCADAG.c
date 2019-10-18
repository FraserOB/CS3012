#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node ** children;
  int numberOfChildren;
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
  node -> children = NULL;
  node -> numberOfChildren = 0;

  return (node);
}

void addChild(node *parent, node *child){
  parent -> children = (node *)malloc((parent -> numberOfChildren) * sizeof(node *));
  parent -> children[numberOfChildren] = child;
  parent -> numberOfChildren++;
}

int main(){
  struct node *root = newNode(20);
  root -> left = newNode(6);
  root -> right = newNode(12);
  root -> left -> = newNode();
  root -> left = newNode();
  root -> left = newNode();
  root -> left = newNode();
  root -> left = newNode();
  root -> left = newNode();
}
