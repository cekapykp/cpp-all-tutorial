#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main (){
	cout << "Dinamik hafıza tutma yöntemi - Malloc " << endl;
	//int a[5]; dizisinin hafızada yer tutması
	int *p= (int*)malloc(sizeof(int)*3); 		//İnt değer tutacak yer aç ve bunun boyutunu 3 ile sınırlandır
	p[2]=3;
	cout << p[2] << endl;
}
/*
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int f(int *p){
	*p=10;
}
int main (){
	cout << "Dinamik hafıza tutma yöntemi - Malloc " << endl;

	int *p= (int*)malloc(sizeof(int)*3);
	p[2]=3;
	cout << p[2] << endl;
	
	int *q=(int*)malloc(sizeof(int)*3);
	*q=50;
	f(q);
	cout << *q << endl;
}*/