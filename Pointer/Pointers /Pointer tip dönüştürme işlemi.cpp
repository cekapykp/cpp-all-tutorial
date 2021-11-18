#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main(){
	double d=1213;
	int *i;
	i=(int *)&d;
	
	cout << "d  = " << d << endl;
	cout << "&d = " << &d << endl;
	cout << "i = " << i << endl;
	cout << "*i = " << *i << endl ;					// Tip dönüşümü yapılmadığı sürece 0 gösterir. 
	cout << "*(double *)i" << *(double *)i<< endl;	//Tip dönüşümü yapma işlemi
}