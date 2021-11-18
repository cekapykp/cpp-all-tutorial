#include <iostream>
using namespace std ;
int main (){
	//while döngüsü kullanarak klavyeden girilen 100 e kadar olan sayıların toplamı
	int x, y;
	y=0;
	cout << "100 de kucuk bir sayi giriniz : ";
	cin >> x;
	while(x<100){
		y = y+x;
		x = x+1;
	}
	cout << "Toplam = " << y ;
	return 0;
	
	// aynı döngünün forlu hali 
	/*
	int x, y, x1;
	y=0;
	cout << "100 den küçük bir sayi giriniz : " ;
	cin >> x ;
	for (int i =x ; i<=100 ; i++){
	y+=i;
		}
	cout << "Toplam = " << y << endl;
	return 0;
    */
}