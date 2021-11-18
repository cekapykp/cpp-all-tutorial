#include <iostream>
using namespace std;

class node{
	public:
	int data;
	node *link;
}*newN,*newN1,*newN2;

class vertexlist{
	public:
	node *vlisthead;
};

class Graph{
	public:
	int v; //// dugum
	vertexlist *vl;
};

Graph* createGraph(int n){ //// createGraph(6) 
	Graph* vlist=new (Graph);
	vlist->v=n;
	vlist->vl=new vertexlist[n+1];
	for(int i=0;i<n+1;i++){
		vlist->vl[i].vlisthead=NULL;
	}
	return vlist;
}

node* NewNode(int x){
	newN=new (node);  ///malloc
	newN->data=x;	
	newN->link=NULL;
	return newN;
}
void InsertEdge(Graph *G,int v1, int v2){    ////(G,1,3)
	
	 newN1=NewNode(v1);
	 newN2=NewNode(v2);
	 
	 if(G->vl[v1].vlisthead==NULL)
	 {
	 G->vl[v1].vlisthead=newN2;
	 }
	 else{
	 	 newN2->link= G->vl[v1].vlisthead;
	     G->vl[v1].vlisthead=newN2;
	 }
	 
	 if(G->vl[v2].vlisthead==NULL){
	 	G->vl[v2].vlisthead=newN1;
	 }
	 else{
	 	newN1->link=G->vl[v2].vlisthead;
	 	G->vl[v2].vlisthead=newN1;
	 }
}

int main(){
	
	int v,e;
	cout<<" Dugum sayisi:";
	cin>>v;  ///6
		
	Graph *G=	createGraph(v);
	cout<<" Kenarlar sayisi:";   //5
	cin>>e;
	int edge [e][2];
	for(int i=0;i<e;i++){
		cout<<"V1:";
		cin>>edge[i][0];
		cout<<"V2:";
		cin>>edge[i][1];
		InsertEdge(G,edge[i][0],edge[i][1]);
		
	}
	//// print
	for(int i=0;i<v;i++){
		cout<<"\n "<<i+1<<"{";
		while(G->vl[i+1].vlisthead!=NULL){
			cout<<G->vl[i+1].vlisthead->data<<" ";
			G->vl[i+1].vlisthead=G->vl[i+1].vlisthead->link;
		}
		cout<<"}";
	}
	return 0;
}