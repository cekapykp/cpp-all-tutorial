#include <iostream>
using namespace std ;
	double sayi1, sayi2;
	int islem;
int main (){
	cout << "Hesap makinesi" << endl;
	cout << "Birinci sayiyi giriniz : ";
	cin >> sayi1;
	cout << "İkinci sayiyi giriniz : " ;
	cin >> sayi2;
	cout << endl;
	cout << "Toplama icin 1; Cikarma icin 2; Carpma icin 3; Bolme icin 4 seciniz : ";
	cin >> islem;
	switch(islem){
		case 1:
			cout << "Toplama sonucu : " << sayi1 + sayi2 <<endl ;
			break;
		case 2:
			cout << "Cikarma sonucu : " << sayi1 - sayi2 << endl;
			break;
		case 3 :
			cout << "Carpma sonucu : " << sayi1 * sayi2 << endl;
			break;
		case 4 :
			cout << "Bolme sonucu : " << (float)sayi1 / sayi2 << endl;
			break;
	}
	return 0;
}