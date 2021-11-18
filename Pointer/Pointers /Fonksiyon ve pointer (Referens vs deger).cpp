#include <iostream>
#include <cmath>
using namespace std;
int g(int x);
int k(int *x);
int main (){
	cout << "Göstericiler ve fonksiyonlar, değer ile çağırma, referans ile çağırma" << endl;
	int a=20;
	int *p;
	p=&a;
	//değer ile çağırma 
	g(a);
	cout << a << endl;
	//Referans ile çağırma
	k(p);
	cout << a << endl;
}	
int g(int x){
	x=10;
}
int k(int *x){
	*x=30;
}
/*Referans ile çağırmanın bize sağladığı yarar: 
Normal şartlarda bir fonksiyon, bize sadece 1 değeri getirmektedir. Fakat biz fonksiyonları
göstericiler ile kullandığımız zaman birden fazla değeri döndürmemeiz mümkün oluyor.*/