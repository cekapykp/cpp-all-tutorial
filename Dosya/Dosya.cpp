#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream DOSYAM; 		//ofstream : Dosyaya yazmak için kullanılacak olan akış sınıfı -MOD ios::out
	DOSYAM.open("karalama.txt");
	
	if(DOSYAM.is_open()){	//Dosyamın açılabilirliği kontrol ediliyor
	DOSYAM << "Cekap yakup - Checkup Codes" << endl;
	DOSYAM.close();
	}else{
		cout << "Dosya açılmıyor" << endl;
	}
	
	string satir;						
	ifstream DOSYA2 ("karalama.txt");	//ifstream : Dosyadan okuma yapmak için kullanılacak olan akış sınıfı- MOD ios::in
	if(DOSYA2.is_open()){
		while(getline(DOSYA2,satir)){	//fstream kaynaklı bir kod
		cout << satir << endl;
		
		}
	}
}										//fstream : Okuma / Yazma yapmayı sağlayacak olan akış sınıfı