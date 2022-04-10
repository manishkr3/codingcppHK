/* 
make a tree?
       1
      / \
    2    3
  /  \  / \
 4   5  6  7
 */
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val){//constructor for node
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorderTraverse(Node* root){
    if(root==NULL)
        return;
    cout << root->data<<" ";
    preorderTraverse(root->left);
    preorderTraverse(root -> right);
}
void inorderTraverse(Node*root){
    if(root ==NULL)
        return;
    if(root->left->left==NULL&&root->right->right==NULL)
        cout << root->left;
    
}
int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left= new Node(6);
    root->right->right = new Node(7);
    preorderTraverse(root);
    return 0;
}
/*
1. in binary tree no. of max elements at level l is 2^l, where l is level no. starting from 0 from root
   -total no. of levels is height or l+1=h
2. in BT maximum no. of nodes in whole tree is 2^h-1.
3. For N nodes, minimum possible height or minimum number of levels are log2(N+1)
4. A binary tree with L levels has at least  log2(N+1) levels.
    traversal:
    1.Preorder: root,left,right
    2.inorder: left,root,right
    3.postorder: left,right,root
 */