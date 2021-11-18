#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node *left;
	Node *right;
	Node (int x){
		this->data= x ;
		left=NULL;
		right=NULL;
	}
};


void insert(Node *root,int x)
{
	if(root==NULL){
		Node *root=new Node(x);
	}
	Node *current=root;
	Node *parent=NULL;
	
	while(current!=NULL){
		parent=current;
		if(x<current->data)
			current=current->left;
		else
			current=current->right;
	}
	if(x< parent->data)
	parent->left=new Node(x);
	else
	parent->right=new Node(x);		
}
	
void inorder(Node *root){
	
	stack<Node*> s;
	Node *current=root;
	while(!s.empty() || current!=NULL)
	{
		if(current !=NULL){
			s.push(current);
		current=current->left;
		}
		else{
			current=s.top();
			s.pop();
			cout<<current->data<< " ";
			current=current->right;
			
		}
	}	
}	

Node* deleteT(Node* root,int x){
	Node *current=root;
	Node *pre=NULL;
	while(current!=NULL && current->data!=x){
		
		pre=current;
		if(x<current->data)
			current=current->left;
		else
			current=current->right;
			
	}
	
	if(current==NULL){
		cout<<"yoktur";
	}
	if(root==NULL){
		cout<<"Ağac bos";
	}
		Node* newpos;
		//// yaprak veya tek cocuk
	if(current->left==NULL || current->right==NULL){
	
		if(current->left==NULL)
			newpos=current->right;
		else
			newpos=current->left;
	
	if(current==pre->left)
		pre->left=newpos;
	else
		pre->right=newpos;
		
	free(current);
	}
	//// Sol ve Sağ
	else	{
	Node *pre=NULL;
	Node *temp;
	
	temp=	current->right;	
	while(temp->left!=NULL){
		pre=temp;
		temp=temp->left;
	}
		if(pre!=NULL)
			pre->left=temp->right;
		else
	 		current->right= temp->right;
	
	current->data=temp->data;
	free(temp);	
	}
return root;	
}

bool arama(Node *root, int x){
	
	while(root!=NULL){
		if(x<root->data)
			root = root->left;
		else if(x>root->data)
			root=root->right;
		else	
			return true;
		}
return false;
}

int minval(Node *root){
	if(root==NULL)
	{
	return 0;	
	}else
	{	
	while(root->left !=NULL)
		root=root->left;
		
	return root->data;
	}
}

int maxval(Node *root){
	
	if(root==NULL)
	return 0;
	else
	{
		while(root->right!=NULL)
			root=root->right;
		return root->data;
	}
}

int main(){
	Node *root=new Node(9);
	insert(root,5);
	insert(root,7);
	insert(root,2);
	insert(root,14),
	insert(root,38);
	inorder(root);
	deleteT(root,9);
	cout<<" Sil"<<endl;
	inorder(root);
	cout<<endl;
	insert(root,13);
	inorder(root);
		if(arama(root,32))
			cout<<"Evet"<<endl;
		else
			cout<<"Hayir"<<endl;
	int a=minval(root);
	
	cout<<"  min value:"<<a<<endl;
	
	int b=maxval(root);
	cout<<"Max value:  "<<b<<endl;
	return 0;
}