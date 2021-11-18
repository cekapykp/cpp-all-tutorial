#include <iostream>
using namespace std;

void hesapla(int&,int&);

int main(){
	int x =3,y=5;
	cout << x << " " <<y << endl;
	hesapla(x,y);
	cout << x << " " <<y;
	return 0; 
}

void hesapla(int& x, int& y){
	x+=10;
	y+=10;
}