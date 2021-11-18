//5-100 dahil olmak üzere aralarındaki sayılardan hem 2 hem 5 bölünebilen sayiların toplamını yazdır
#include <iostream>
using namespace std ;	
int main (){
	int toplam = 0;
	int deger;
	for(deger = 0 ; deger <=100 ; deger++){
		if (deger%2==0 || deger%5==0){
			toplam = toplam + deger;
		}
	}
	cout << "istenilen cevap : " << toplam << endl;
	return 0;
}