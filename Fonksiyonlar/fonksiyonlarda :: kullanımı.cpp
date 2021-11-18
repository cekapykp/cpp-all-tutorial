#include <iostream>
using namespace std;

int x=9,y=3;

int fonk1(int);
int fonk2(int);
int fonk3(int);
int fonk4();

int main(){
	cout << fonk1(1)<< endl;
	cout << fonk2(2) << endl;
	cout << fonk3(3) << endl;
	cout << fonk4() << endl;
}

int fonk1(int y){
	return ::x*(y+::y);
}
int fonk2(int y){
	return x*(y+::y)+fonk1(4);
}
int fonk3(int y){
	return fonk1(y)+fonk2(y);
}
int fonk4(){
	return ::x*::y;
}