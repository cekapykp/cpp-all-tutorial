#include <iostream>
using namespace std;
int f(int);

int main(){
	cout << "Fonksiyonlar" << endl;
	f(9);
	f(10);
	cout << f(6) << endl;
	cout << f(1)<< endl;
}

int f(int x){
	cout << x+3 << endl;
	return 5;
}