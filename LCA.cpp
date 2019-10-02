#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// A Binary Tree node
struct node
{
  public:
  int data;
  node* left;
  node* right;
};

// Utility function creates a new binary tree node with given key
node* newNode(int k)
{
    node* temp = new node();
    temp->data = k;
    temp->left = temp->right = NULL;
    return (temp);
}

node* LCA(node* root, int n1, int n2)
{
  if(root == NULL) return NULL;

  if(root->data > n1 && root->data > n2)
    return LCA(root->left, n1, n2);

  if(root->data < n1 && root->data < n2)
    return LCA(root->right, n1, n2);

  return root;
}

// Driver program to test above functions
int main()
{
    // Let us create the Binary Tree shown in above diagram.
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    int n1 = 4, n2 = 5;
    node* t = LCA(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is " << t->data << endl;

    n1 = 4, n2 = 6;
    t = LCA(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is " << t->data << endl;

    n1 = 3, n2 = 4;
    t = LCA(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is " << t->data << endl;

    n1 = 2, n2 = 4;
    t = LCA(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is " << t->data << endl;

    return 0;
}
