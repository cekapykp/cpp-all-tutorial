#include <iostream>
using namespace std;

void yildizyaz (int);

int main(){
	cout << "Yildiz yazdirma programi" << endl;
	yildizyaz(0);
	cout <<  endl;
	yildizyaz(20);
	cout << endl;
	yildizyaz(30);
	cout << endl;
	yildizyaz(61);
	cout << endl;
}

void yildizyaz (int x){
	if(x<10){
		x=10;
	}else if(x>30){
		x=30;
	}for(int i=0;i<x;i++){
		cout << "*";
	
	}
		cout << endl;
}