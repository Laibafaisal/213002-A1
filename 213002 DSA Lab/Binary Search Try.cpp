#include<iostream>
using namespace std;

struct node{
	int data;
	node *right;
	node *left;
}*root;

class bst{
	bst(){
		root = NULL;
	}
	void insert (node*, node*);
	void preorder(node *);
	void inorder(node *);
	void postorder(node *);
	
};
int main(){
}

void bst :: insert(node *q, node *temp){
		if (root == NULL){
			root = new node();
			root->data = temp->data;
			root->right = NULL;
			root->left = NULL;
		}
		
		if (q->data == temp->data){
			cout<<"The number already exists in the tree!"<<endl;
		}
		
		if (q->data < temp->data){
			if (q->left != NULL){
				insert (q->left,temp);
			}
			else{
				q->left = temp;
				(q->left)->left = NULL;
				(q->left)->right = NULL;
				cout<<"Node added to the left!"<<endl;
			}
		}
		
		else{
			if (q->right !=NULL){
				insert(q->right,temp);
			}
			else{
				q->right = temp;
				(q->right)->right = NULL;
				(q->right)->left = NULL;
				cout<<"Node inserted to the right!"<<endl;
			}
		}
	}
	
void bst::preorder(node q*){
	if (root == NULL){
		cout<<"Tree is empty."<<endl;
	}
	else if (q!= NULL){
		cout<<q->data<<endl;
		preorder(q->left)<<endl;
		preorder(q->right)<<endl;
	}
}

void bst::INorder(node q*){
	if (root == NULL){
		cout<<"Tree is empty."<<endl;
	}
	else if (q != NULL){
		inorder(q->left)<<endl;
		cout<<q->data<<endl;
		inorder(q->right)<<endl;
	}
}
