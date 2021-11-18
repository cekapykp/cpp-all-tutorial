#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    int number;
    srand(time(NULL));
    number = rand() % 10*2;
    cout << "0-20 arasi (sinirlar dahil) cift sayi tahmin etme oyunu - CheckupCodes" << endl;
    for(int j=1;j<=5;j++){
    	int sayi;
    	cout << "Deneme yapiniz : ";
    	cin >> sayi;
    	if(sayi == number){
    		cout << "TEBRIKLER"<< endl;
    		cout << j << ". Denemede Tutulan Sayiyi Buldunuz" << endl;
    		return 0;
		}else{
			cout << j << ". Deneme Basarisiz" << endl;
		}	
	}
	cout << "Tutulan sayi " << number << " idi" << endl ;
	return 0;
}