#include <iostream>    /*nkare ile nlogn*/
using namespace std;

int partition(int A[],int start,int end){
	int piv=A[start];  /// pivot ilk eleman
	int i=start+1;
	for(int j=start+1;j<=end;j++){
		if(A[j]<piv){
			//swap  (A[i]   ,  A[j]
			int temp=A[i];
			A[i]=A[j];
			A[j]=temp;
	
		i++;
	}
	}
	//swap A[start] A[i-1]
	int temp=A[start];
	A[start]=A[i-1];
	A[i-1]=temp;
	return i-1;
}



void quickSo(int dizi[],int start, int end){
	if(start<end){
		
		int pivPos=partition(dizi,start,end);
		quickSo(dizi,start,pivPos-1);
		quickSo(dizi,pivPos+1,end);
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
	quickSo(A,0,boyut-1);
	for(int i=0;i<boyut;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}