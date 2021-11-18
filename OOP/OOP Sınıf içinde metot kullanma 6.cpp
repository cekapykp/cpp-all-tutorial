#include <iostream>
using namespace std;

class daire{
	private:  		//Burda tanımlayacaklarımız sınıf dışında okunmaz
		const double pi = 3.14; 		//pi değişkenini sadece içerdeki kodlar görmesi için const kullandık
		public:
			double r;
			double alan(double r){
				return pi*r*r;
			}
};
int main(){
	daire d;
	cout << "yaricap giriniz : ";cin >> d.r ;
	cout << "Alan : " << d.alan(d.r);
	return 0;
}