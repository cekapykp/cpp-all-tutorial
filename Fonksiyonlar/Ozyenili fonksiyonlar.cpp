#include <iostream>
#include <cmath>
 using namespace std;
 
 int faktoriel (int x){
 	if(x==1){
 		return 1;
	 }
	 return x*faktoriel(x-1);
 }
 int main(){
 	cout << "Ozyelini fonksiyonlar" << endl;
 	cout << faktoriel(5)<<endl;
 }