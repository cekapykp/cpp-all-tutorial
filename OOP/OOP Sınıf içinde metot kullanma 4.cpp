#include <iostream>
using namespace std;

class dikdortgen{
	public:
		int en;
		int boy;
		int alan(){
			return en*boy;
		}
		int cevre (){
			return 2*(en+boy);
		}
};
int main (){
	dikdortgen obje1,obje2;
	obje1.en = 20;
	obje1.boy = 50;
	obje2.boy = 150;
	obje2.en =100;
	cout << "Ilk dikdortgen alan : " << obje1.alan() << "   Ilk dikdortgen cevre : " << obje1.cevre() << endl;
	cout << "Ikinci dikdortgen alan : " << obje2.alan() << "   Ikinci dikdortgen cevre : " << obje2.cevre() << endl;

}