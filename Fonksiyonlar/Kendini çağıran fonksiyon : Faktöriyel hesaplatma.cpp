#include <iostream>
using namespace std;

int faktor (int sayi);

int main(){
	int sayi;
	cout << "Tam sayi degerini girinizi.";
	cin >>sayi;
	cout << sayi << "sayinin faktoriyeli : " << faktor(sayi) << endl;
	return 0;
}
int faktor (int sayi){
	if(sayi<=1){
		return 1;
	}else{
		return sayi*faktor(sayi-1);
	}
}