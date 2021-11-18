#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		int height;
};
 
Node* yeniNode(int x){
	Node *node=new Node();
	node->data=x;
	node->left=NULL;
	node->right=NULL;
	node->height=1;
	return node;
	
}

int height(Node *node){
	
	if(node==NULL){
		return 0;
	}else{
		return node->height;
	}
}
int max(int a,int b){
	return (a>b)?a:b;	
}

Node *RRotate(Node *y){    /// sag
	Node *x=y->left;
	Node *t=x->right;
	
	x->right=y;
	y->left=t;
	
	y->height=max(height(y->left) ,height(y->right))+1;
	x->height=max(height(x->left),height(x->right))+1;
	
	return x;
	
}

Node *LRotate(Node *x){   ///sol
	
		Node *y=x->right;
		Node *t=y->left;
		
		y->left=x;
		x->right=t;
		
		x->height=max(height(x->left),height(x->right))+1;
		y->height=max(height(y->left) ,height(y->right))+1;
	
		return y;
}

int Bfaktor(Node *node){
	if(node==NULL){
		return 0;
	}else{
		return height(node->left)-height(node->right);
	}
}

Node* EkleAVL(Node *node,int data){
	///// 1. aşamada ekle
	if(node==NULL){
		return yeniNode(data);
	}
	if(data<node->data)
		{
		node->left=EkleAVL(node->left,data);
		}
	else if(data> node->data){
		node->right=EkleAVL(node->right,data);
	}else
	return node;
	///// 2. aşama yükseklik 
	node->height=max(height(node->left),height(node->right))+1;
	
	//// 3. aşama Denge kontrol
	int Dfaktor=Bfaktor(node);
	
	if(Dfaktor>1 && data<node->left->data)
		{
			return RRotate(node);
		}
	if(Dfaktor>1 && data >node->left->data){
		node->left=	LRotate(node->left);
		return RRotate(node);
	}
	
	if(Dfaktor<-1 && data>node->right->data)	
	{
		return LRotate(node);
	}
	if(Dfaktor<-1 && data<node->right->data)
	{
	node->right=	RRotate(node->right);
	return LRotate(node);
	}
	return node;		
}
void PreOrder(Node *root){
	///kök sol sağ
	if(root!=NULL){
		cout<<root->data<< " ";
		PreOrder(root->left);
		PreOrder(root->right);
	}
}
void InOrder(Node *root){
	//sol kök sağ
	if(root==NULL){return ;
	}else{
		InOrder(root->left);
		cout<<root->data<<" ";
		InOrder(root->right);
	}
}
void PostOrder(Node *root){

	/// sol sağ kök
	if(root==NULL){
	return ;
	}else{
		PostOrder(root->left);
		PostOrder(root->right);
		cout<<root->data<<" ";
	}
	
}
int main(){
	
	Node *root=NULL;
	root=EkleAVL(root,4);	
	root=EkleAVL(root,10);	
	root=EkleAVL(root,20);
	root=EkleAVL(root,30);	
	cout<<"Pre Order:";
	PreOrder(root);
	cout<<endl;
	cout<<"In Order:";
	InOrder(root);
		cout<<endl;
	cout<<"Post Order:";
	PostOrder(root);
		cout<<endl;
			cout<<endl;
	root=EkleAVL(root,40);
	cout<<"2 Eklendi"<<endl;
	cout<<"Pre Order:";
	PreOrder(root);
	cout<<endl;
	cout<<"In Order:";
	InOrder(root);
		cout<<endl;
	cout<<"Post Order:";
	PostOrder(root);
	return 0;
}