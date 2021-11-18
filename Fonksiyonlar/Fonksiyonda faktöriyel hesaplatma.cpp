#include <iostream>
using namespace std;
int sayi;
int fak(int a);

int main (){
	cout << "Girilen sayinin faktoriyelini bulduran program " << endl;
	cout << "Sayi giriniz : " ;
	cin >> sayi;
	cout << fak(sayi);
}

int fak(int a){
	int toplam =1;
	for(int i=2;i<=a;i++){
		toplam*=i;
	}
	return toplam;
}