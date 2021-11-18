#include <iostream>
#include <string.h>
using namespace std;

struct tarih{
	int gun;
	int ay;
	int yil;
};
struct kisiler {
	char adi[21];
	struct tarih dogum;
};
int main(){
	struct kisiler adam1;
	strcpy(adam1.adi,"Ahmet");	//Kopyalama yöntemi ile adam1 adında kisiler struct'ın adi na Ahmet yazdırdık.
	adam1.dogum.gun = 3;
	adam1.dogum.ay = 9;
	adam1.dogum.yil = 2020;
	cout << " " << adam1.adi << "'in Dogum Tarihi :  " << adam1.dogum.gun << "/ "<< adam1.dogum.ay << "/ " << adam1.dogum.yil << endl;
}