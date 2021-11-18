#include <iostream>
using namespace std;
int main(){
	// klavyeden -1 girilene kadar girilen sayıların ortalamasını veren algoritma
	int _sayi=0;
	int _toplam=0;
	int _adet=0;
	
	cout << "'-1'yazana kadar girilen sayilarin ortalamasini yazdiran program" << endl;
	for(;;){ //koşulunuz yoksa sonsuz döngü förmülü
	cout << "Giriniz : ";
	cin >> _sayi;
	if(_sayi==-1){
		break;//döngü kırılacak
	}
	_toplam +=_sayi;
	_adet++;
	}
	cout << "Girilen sayilarin ortamasi : " << float(_toplam/_adet) << endl;
	return 0;
}