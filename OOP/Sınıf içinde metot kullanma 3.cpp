#include <iostream>
using namespace std;

class insan{
	public:
		int boy ;
		int kilo;
		int yas;
		int yemek(){
			kilo++;
		}
};
int main(){
	insan neva;
	neva.boy = 120;
	neva.kilo=20;
	neva.yas = 10;
	cout << "Neva yas : " << neva.yas << "Neva boy : " << neva.boy << "Neva kilo : " << neva.kilo << endl;
	neva.yemek();
	cout << "Neva yas : " << neva.yas << "Neva boy : " << neva.boy << "Neva kilo : " << neva.kilo << endl;
	

}