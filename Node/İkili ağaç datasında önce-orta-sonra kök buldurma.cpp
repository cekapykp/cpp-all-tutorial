#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	char data;
	Node* left;
	Node* right;
	
	Node(char x){
		this->data=x;
		left=NULL;
		right=NULL;
	}
};


void prOrder(Node *root){

	stack<Node*> s;
	s.push(root);
	while(!s.empty()){
	 Node* current=	s.top();
	 s.pop();
	 cout<<current->data<< " ";
	 if(current->right)
		s.push(current->right);
	 if(current->left)
	 s.push(current->left);
	}
	
}
void inOrder(Node *root)
{
	
	stack<Node*> s;
	Node* current= root;
	while(!s.empty() ||current !=NULL)		
	{
		if(current !=NULL)
		{
		s.push(current);
		current=current->left;
		}
		else
		{
			current=s.top();
			s.pop();
			cout<<current->data<<" ";
			current=current->right;
		}
	}
	
	
}

void poOrder(Node *root){
	
/*	stack<Node*> s;
	stack<char> y;
	
	s.push(root);
	while(!s.empty()){
		
		Node *current=s.top();
		s.pop();
		y.push(current->data);
		
		if(current->left)
		s.push(current->left);
		if(current->right)
		s.push(current->right);
	}
	
	while(!y.empty())
	{
    	cout<<y.top()<< " ";
		y.pop();
	}*/
	
		
	stack<Node*> s;
	stack<char> y;
	
	s.push(root);
	while(!s.empty())
	{
		Node *current=s.top();
		s.pop();
		y.push(current->data);
		if(current->left)
		 {s.push(current->left);
		   }  
		if(current->right)
		{ s.push(current->right);
		}
		  
	}
	
	while(!y.empty())
	{
		cout<<y.top()<<" ";
		y.pop();
	}
	
 
}


int main()
{
    Node *root=new Node('P');
    root->left=new Node('A');
    root->right=new Node('T');
    
    root->left->left=new Node('P');
    root->left->right= new Node('A');
    
    root->right->left=new Node('Y');
    root->right->right=new Node('A');
    cout<<"Once kok:   ";
    prOrder(root);
    cout<<endl;
    cout<<"Orta kok:   ";
    inOrder(root);
       cout<<endl;
    cout<<"Sonra kok:  ";
    poOrder(root);
    cout<<endl;
	return 0;
}