#include <iostream>        /* O(n)= n2 ile n */
using namespace std;

void InsertS(int dizi[],int n){
	
	for(int i=1;i<n;i++){
		int temp=dizi[i];
		int j;
		for(j=i; 0<j && temp<dizi[j-1];j--){
			dizi[j]=dizi[j-1]; //// shift
		}
		dizi[j]=temp;  //insert  
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
	InsertS(A,boyut);
//	quickSo(A,0,boyut-1);
	for(int i=0;i<boyut;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}