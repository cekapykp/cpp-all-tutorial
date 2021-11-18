#include <iostream>
using namespace std;

class insan{
	public:
		string ad;
		string soyad;
};
int main(){
	insan obje1,obje2;
	obje1.ad = "Selma";
	obje2.ad = "Mustafa";
	obje1.soyad = "Sari";
	obje2.soyad = "Sari";
	cout << obje1.ad << " "<< obje1.soyad << endl;
	cout << obje2.ad << " "<< obje2.soyad << endl;

}