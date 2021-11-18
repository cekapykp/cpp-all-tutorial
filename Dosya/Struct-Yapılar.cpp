#include <iostream>
using namespace std;

int main(){
		struct ogrenci{
			int no;
			string ad;
			string soyad;
			char sube;
		};
		ogrenci ogrenci_1;
		ogrenci_1={767,"Yakup","Sari",'B'};
		cout << "Ogrenci ad : " <<ogrenci_1.ad << endl;
		cout << "Ogrenci soyad : " <<ogrenci_1.soyad << endl;
		cout << "Ogrenci no : " <<ogrenci_1.no << endl;
		cout << "Ogrenci sube : " <<ogrenci_1.sube << endl<<endl;
		
		ogrenci_1.sube = 'A';
		
		cout << "Ogrenci sinifta huzursuzluk cikardigi icin atilmistir" << endl <<endl;
		
		cout << "Ogrenci yeni sube : " << ogrenci_1.sube << endl;
}