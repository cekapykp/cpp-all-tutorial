#include <iostream>
using namespace std;
int main(){
	double knr1,knr2,hipo;
	cout << "Dik uckenin bir dik kenarini giriniz : " ;
	cin >> knr1 ;
	cout << "Dik ucgenin diger dik kenarini giriniz : " ;
	cin >> knr2;
	cout << "Dik ucgenin hipotenus uzunlugunu giriniz : " ;
	cin >> hipo;
	
	if(knr1*knr1 + knr2*knr2 == hipo*hipo){
		cout << "Bu uzunlukarda girilen bir dik ucgendir";
		
	}else {
		cout << "Bu degerlere uygun bir ucgen bulunmaz !";
	}
}