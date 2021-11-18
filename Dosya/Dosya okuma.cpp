#include <iostream>
#include <fstream>
using namespace std;
int main(){
	//HATIRLATMA : klavyeden satir okutmak için getline(cin,str) kullanılarak okunana 'satir' bilgisi str değişkeninin içine yazılabiliyor
	//Okuma işlemi
	fstream dosyam;
	string line;
	dosyam.open("karama2.txt",ios::out);
	if(dosyam.is_open()){
		dosyam << "İzmirin dağlarında çiçekler açar "<<endl;
		dosyam<< "Yaşa mustafa kemal paşa yaşa" << endl;
		dosyam << "Adın yazılacak mücevher taşa" << endl;
		cout << "Dosya basarili bir sekilde acildi" << endl;
	}else {
		cout << "Dosya acma islemi basariz";
	}
}

/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//HATIRLATMA : klavyeden satir okutmak için getline(cin,str) kullanılarak okunana 'satir' bilgisi str değişkeninin içine yazılabiliyor
	//Okuma işlemi
	fstream dosyam;
	string line;
	dosyam.open("karama2.txt",ios::in);
	while(dosyam.good()){          //bu fonksiyon akış(yazma/okuma)işlemlerine hazır ise doğru, değilse yanlış cevabını verecek
		getline(dosyam,line);        //bu örnekte dosya sonuna ulaşıncaya kadar okuma yapmaya devam için kullanılmıştır
		cout << line << endl;
	}
	dosyam.close();
}
*/