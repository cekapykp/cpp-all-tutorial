#include <iostream>
using namespace std;

int faktoriyel(int);

int main(){
	cout << faktoriyel(10)<< endl;
}
int faktoriyel(int x){
	int carpim =1;
	for(int i=x;i>0;i--){
		carpim*=i;
	}
	return carpim;
}