#include <iostream>
using namespace std;

void hesapla (int);
int hesap(int);
int main(){
	int a=3;
	hesapla(a);
	cout << a << endl;
	
	a=hesap(a);
	cout << a << endl;
	return 0;
	
}


void hesapla(int b){
	b=33;
}

int hesap(int c){
	c=33;
	return c;
}