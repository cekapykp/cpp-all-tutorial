//girilen 10 sayidan tek ve çiftlerin sayısını söyleyen program
#include <iostream>
using namespace std;
int main(){
	int sayi;
	int cift=0;
	int tek =0;
	for(int i=0;i<10;i++){
		cout << "deger giriniz : ";
		cin >> sayi;
		if(sayi%2==0){
			cift = cift +1 ;
		}else{
			tek = tek + 1;
		}
	}
	cout << "Girilen tek sayi adedi : " << tek << "\t Girilen cift sayi adedi : " << cift << endl;
	return 0;
}