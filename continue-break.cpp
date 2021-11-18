#include <iostream>
using namespace std;
int main(){
	// continue break yapısı
	cout << "Continue ve Break yapisi " << endl;
	for(int a = 0 ; a<10;a++){
		if(a==5){
			break;
		}
		cout << a << endl;
	}
	cout << "-----------------------------------"<< endl;
	for(int b=0;b<10;b++){
		if(b==5){
			continue;
		}
		cout << b << endl;
	}
}