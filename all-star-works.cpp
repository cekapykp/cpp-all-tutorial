#include <iostream>
using namespace std;
int main (){
	//yıldız çalışması 1
	for (int i =0 ; i<5 ; i++){
		for (int j=0 ; j<=i ; j++){
			cout << "*";
		}
		cout << endl;
	}cout << endl ;
	
	// yıldız çalışması 2
	for(int a = 0;a<5;a++){
		for(int b=0;b<5-(a+1);b++){
			cout << " ";
		}for(int b=0;b<=a;b++){
			cout << "*";
		}cout <<endl;
	}cout << endl ;
	// yıldız çalışması 3
	for (int sutun1=0 ; sutun1<6 ; sutun1++){
		for(int satir1=0;satir1<6-(sutun1+1) ;satir1++){
			cout<<"*";
		}for(int satir1 =0;satir1<=sutun1;satir1++){
			cout << " ";
		}cout << endl;
	}
	//yıldız çalışması 4
	for(int sayi1=0;sayi1<6;sayi1++){
		for(int sayi2=0;sayi2<=sayi1;sayi2++){
			cout << " " ;
		}for(int sayi2 =0;sayi2<6-(sayi1+1);sayi2++){
			cout << "*";
		}cout << endl;
	}cout << endl;
	// yıldız çalışması 5
	int deger;
	cout << "Bir boyut giriniz : " ;
	cin >> deger;
	for(int sayi3=0;sayi3<deger;sayi3++){
		for(int sayi4=0;sayi4<=sayi3;sayi4++){
			cout << " " ;
		}for(int sayi4 =0;sayi4<deger-(sayi3+1);sayi4++){
			cout << "*";
		}cout << endl;
	}cout << endl;
	
}