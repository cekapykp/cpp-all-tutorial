#include <iostream>
using namespace std;
int j, dizi[2][3];
main(){
	//Klavyeden girilen sayıları 2 satır ve 3 sütundan oluşan bir matrisin birinci satırına, bu
//sayıların karelerini de ikinci satırına yerleştiren bir program yazalım.
// birinci satirin karelerinin
// ikinci satıra yazilmasi
for(j=0;j<3;j++){
cout << j+1 << ". Sayiyi Giriniz: ";
cin >> dizi[0][j];
dizi[1][j]=dizi[0][j]*dizi[0][j];
}
cout << endl;
for(j=0;j<3;j++){
cout << j+1 << ". Sayinin Karesi: " << dizi[1][j];
cout << endl;
}
return 0;
}