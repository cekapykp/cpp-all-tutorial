//Girilen 5 sayının aritmatik ortamalasını alan program
#include <iostream>
using namespace std ;	
int main (){
	int top_sayi, top_deger;
	int deger = 0;
	for(top_sayi =0 ; top_sayi <5 ; top_sayi++){
		cout << "Deger gir : ";
		cin >> deger;
		top_deger = top_deger + deger;
		
	}
	cout << "Girilen 5 sayinin aritmatik ortalamasi : " << (float)top_deger/top_sayi<< endl;
	
	return 0;

}