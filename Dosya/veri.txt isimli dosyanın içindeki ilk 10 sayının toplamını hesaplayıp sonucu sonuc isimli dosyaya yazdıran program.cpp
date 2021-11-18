#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int i, sayi,toplam=0;
	
	ofstream yaz;	//dosyaya yazmak için output
	ifstream oku;	//dosyayı okumak için input
	oku.open("veri.txt",ios::out);			//bu txt dosyasının içerisine değerler yazmalısın 
	for(int i=0;i<10;i++){
		oku>>sayi;		//sayiları oku
		toplam+=sayi;	//okunan sayiları topla
	}
	oku.close();
	yaz.open("sonuc.txt"); //sonuc.txt adında dosya aç
	yaz << "Toplam : " << toplam << endl;
	yaz.close();
	return 0; 
}