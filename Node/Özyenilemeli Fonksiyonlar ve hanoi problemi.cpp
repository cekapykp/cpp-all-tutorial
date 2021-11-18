#include <iostream>
using namespace std;


int faktoriyel(int n){
	if(n<=1)
		{
		return 1;

		}else
		{
		return n*faktoriyel(n-1);
		}
}                    ////faktoriyel(4)   return 4*faktoriyel(3);  return 4*6=24
					/////faktoriyel(3)   return 3*faktoriyel(2);  return 3*2=6
					/////faktoriyel(2)   return 2*faktoriyel(1);  return 2*1=2
					//// faktoriyel(1) 	 return 1;
					
int iterfaktoriyel(int n){
	
	int sonuc=1;
	for(int i=n;i>1;i--){
		sonuc=sonuc*i;
	}
	
	return sonuc;
}
int topla(int n){
	int sonuc=0;
	if(n==1){
	return 1;
	}
	else{
	 sonuc=topla(n-1);
	}
	return sonuc+n;
	//////// topla (4)   sonuc=topla(3)   return sonuc+4;=10
		///  topla(3)    sonuc=topla(2)   reutn sonuc+3; =6
		/// topla (2)	sonuc=topla(1)   return sonuc+2; =3
		/// topla (1)   				  return 1;       =1
}

int ust(int a,int n){
	if(n==0){ 
	return 1;            //// ust(a,n)   ust(3,0)=1
	}
	else if(n==1)
	{
		return a;          //// ust(a,n)   ust(3,1)=3
	}
	else{
		return a*ust(a,n-1);   ///ust (a,n)  n*ust( 3,2)  ust(3,1) =3--->3*3=9
	}
}
int fibo(int n){
	
	
	if(n<=1){return n;
	}else{
		return fibo(n-2)+fibo(n-1);
	}
}

int iterfibo(int n){   /// 0 1 1 2 3
	int s1=1,s2=0,sonuc=0;
	for(int i=0;i<n;i++){
		
		sonuc=s1+s2;
		s1=s2;
		s2=sonuc;
		
	}
	return sonuc;
}

void hanoi(int n,char kaynak, char hedef,char temp){
	if(n==1){
		cout<<"Disk 1i "<<kaynak<<" Kuleden "<<hedef<<" kuleye tasi"<<endl;
		return;
	}else{
		hanoi(n-1,kaynak,temp,hedef);
		cout<<"Disk "<<n<<"i "<<kaynak<<" Kuleden "<<hedef<<" Kueleye tasi"<<endl;
		hanoi(n-1,temp,hedef,kaynak);
	}
}
int main(){

int n;
cin>>n;  ///3   ///(2,'A','B','C')   --->   ////  (1,'A','C','B')
hanoi(n,'A','C','B');

		return 0;
}




/*	int n,i=0;
	cin>>n;
	while(i<n){
		cout<<" "<<fibo(i);
		i++;
	}
	cout<<endl;
	int j=0;
		while(j<n){
		cout<<" "<<iterfibo(j);
		j++;
	}
	/*
/*	cout<<faktoriyel(n)<<endl;
		cout<<iterfaktoriyel(n)<<endl;
	cout<<topla(n)<<endl;*/
/*	int a;
	cin>>a;
		int n;
	cin>>n;
	cout<<ust(a,n);*/