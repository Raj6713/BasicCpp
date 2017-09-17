/*This header class will implement a tree and will show*/
#ifndef TREEIMPL_H
#define TREEIMPL_H

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* newNode(int data)
{
	struct Node* temp;
	temp=(struct Node*)malloc(sizeof(Node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return Node;
};


class tree
{
   tree()
   {
   };
   ~tree();
   
   void insertNode();
   void inOrder();
   void postOrder();
   void preOrder();
}


tre



#endif