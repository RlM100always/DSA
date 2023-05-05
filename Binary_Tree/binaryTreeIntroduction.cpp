#include<iostream>
using namespace std ;
/*
    Properties of Binary Tree : 
    1.Maximum nodes at level L = 2^L
      a. L=0 -> 2^0 =1
      b. L=1 -> 2^1 =2 
      c. L=2 -> 2^2 =4 
    2.Maximum nodes in a tree of height H = 2^H-1
      !! Height means total Number of Level !!
    3.For N nodes ,minimum possible height or minimum number of levels are = log(base)(N+1)  

*/

//Creating Node 
struct Node
{
    int data ;
    Node *left ;
    Node *right ;

    Node(int data){
        this->data=data ;
        left =NULL ;
        right =NULL ;
    }
};

//root->leftSubtree->rightSubtree
void preorderTraverse(struct Node *root){
   if(root==NULL)return ;
   cout<<root->data<<" ";
   preorderTraverse(root->left);
   preorderTraverse(root->right);
}

//leftSubtree->root->rightSubtree
void inorderTraverse(struct Node *root ){
   if(root==NULL)return ;
   inorderTraverse(root->left);
   cout<<root->data<<" ";
   inorderTraverse(root->right);
}
//leftSubtree->rightSubtree->root
void postorderTraverse(struct Node *root){
   if(root==NULL)return ;
   postorderTraverse(root->left);
   postorderTraverse(root->right);
   cout<<root->data<<" ";
}

int main(){

    struct Node *root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);


    /*
           1 
          / \
         2   3
        / \  /\
       4  5 6  7
    */

   preorderTraverse(root);
   cout<<endl;
   inorderTraverse(root);
   cout<<endl;
   postorderTraverse(root);
   cout<<endl;
    
    
    return 0 ;
}