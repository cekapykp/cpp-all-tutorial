#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
		Node(int x){
			this->data=x;
			this->next=NULL;
		}
};

Node * ekle(Node * head,int data){
	
	if(head==NULL){
	return new Node(data);
	}else{
	head->next=ekle(head->next,data);
	}
	return head;
}

void goster(Node* head){
	if(head==NULL){
		cout<<" ";
		return;
	}else{
		cout<<head->data<<" ";
		goster(head->next);
	}
}
void tersgoster(Node* head){
	
	if(head==NULL){
	cout<<" ";
	return;
	}
	else{
		tersgoster(head->next);
		cout<<head->data<<" ";
	}
}
bool arama(Node* head, int data){    ///(head,4)  arama(head->next,4)  arama(head->next,4)
	
	if(head==NULL){
		return false;
	}
	if(head->data==data){
		return true;
	}else{
		return arama(head->next,data); 
	}
}

Node* sil(Node* head, int data){   ///sil(head,6)   sil(head->next,6)   sil( head->next,12)
	
	if(head==NULL){return NULL;
	}
	Node* position=	sil(head->next,data);
	if(head->data==data){
		delete head;
		return position;
	}else{
		head->next=position;
		return head;
	}
}
int main(){
	int menu=0,n,m;
	string f;
	Node* head=NULL;
	while(1){
	
	cout<<"\n Menu:    1.Ekle   2.Arama   3.Silme   4.Gorunutle 5.TersGoruntule 6.Cikis \n  "<<endl;
	cin>>menu;
	switch(menu)
	{
		case 1:cout<<"Listede kac eleman olacak: "<<endl;
				cin>>n;
				for (int i=1;i<=n;i++){
					cout<<i<<". Eleman"<<endl;
					cin>>m;
				 
					 head=ekle(head,m);
				}
			break;
		case 2:	cout<<"Aramak istediginiz eleman"<<endl;
				cin>>n;
				bool sonuc;
				sonuc=arama(head,n);
				if(sonuc==1){cout<<"Bulundu";
				}else{cout<<"Bulunamadi";
				}
				break;
		case 3: cout<<"Silmek istediginiz eleman:"<<endl;
				cin>>n;
				head=sil(head,n);
			
				break;
		case 4:	goster(head);
				break;
		case 5: tersgoster(head);
				break;
		case 6: exit(0);
	}
 
}

return 0;
}