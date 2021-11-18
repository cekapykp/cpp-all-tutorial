#include <iostream>
#include <cmath>
 using namespace std;
 
 bool ciftmi(int sayi);
 
 int main (){
 	int sayi;
 	cout << "Bir sayi giriniz : " << endl;
 	cin >> sayi;
 	cout <<"Girilen sayi cift mi ? : "<<  ciftmi(sayi);
 }
 bool ciftmi(int sayi){
 	if(sayi%2==0){
 		return true;
	 }else{
	 	return false;
	 }
 }