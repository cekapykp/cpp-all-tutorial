#include <iostream>
using namespace std;

void heapify(int dizi[], int n, int i){
	int largest=i; /// largest, en buyuk eleman
	int left=2*i+1;   /// Sol 2*i
	int right=2*i+2;  /// sag 2*i +1
	  ////// exchange
	if(left<n && dizi[left]>dizi[largest])   //// sol kontorl edilir  sol rootdan buyukse
	{
		largest=left;
	}
	if(right<n && dizi[right]>dizi[largest]){
		largest=right;
	}
	////////////////
	if(largest!=i){
		int temp=dizi[i];
		dizi[i]=dizi[largest];
		dizi[largest]=temp;
		heapify(dizi,n,largest);
	}
	
}
void heapSort(int dizi[],int n){
	
	for(int i=n/2-1;0<=i;i--){ //// build Heap
		heapify(dizi,n,i);
	}
	for(int i=n-1;0<i;i--){
		int temp=dizi[0];
		dizi[0]=dizi[i];
		dizi[i]=temp;

	heapify(dizi,i,0);
		}
}


int main(){
	// int A[]={8,12,9,3};
	cout<< "Dizi kac eleman olacak?"<<endl;
	int n;
	cin>>n;
	int A[n];
	cout<<n<<" Elemanlari giriniz:";
	int y;
	for(int i=0;i<n;i++){
		cin>>y;
		A[i]=y;
	}
	int boyut=sizeof(A)/sizeof(A[0]);
 	heapSort(A,boyut);
	for(int i=0;i<boyut;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}