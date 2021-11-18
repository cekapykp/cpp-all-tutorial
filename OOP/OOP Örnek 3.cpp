#include <iostream>
using namespace std;

class personel{
	public:
		char ad[30];
		char soyad[30];
		char tckn[12];
};


int main(){
	personel yakub={"yakup","sari","1903013006"};
	personel yusuf;
	yusuf = yakub;
	
	cout << yusuf.ad <<endl << yusuf.soyad << endl << yusuf.tckn << endl ;
}