#include <iostream>
using namespace std;
int main(){
	// girilen iki değer arasındaki tamsayıları toplayan program
	int _i,_baslangic,_son;
	int toplam = 0;
	cout <<"Sirayla iki adet tam sayi girin ve entere basiniz"<<endl;
	cout << "1. Sayi : " ;
	cin>>_baslangic;
	cout << "2. Sayi : " ;
	cin >> _son;
	if(_baslangic > _son){
		int _temp;
		_temp = _baslangic;
		_baslangic = _son;
		_son = _temp; 
	}
	for(_i=_baslangic+1;_i<_son;_i++){
		toplam+=_i;
	}
	cout << "Girilen iki sayi arasindaki degerlerin toplami : " << toplam <<  endl;
}