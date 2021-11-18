#include <iostream>
#include <string>
using namespace std;
class temel{
	public:
		string ad,soyad;
		int yas;
		void sorgu(){
			cout << "Adiniz : \n";
			cin >> ad;
			cout << "Soyadiniz : \n";
			cin >> soyad;
			cout << "Yasiniz : \n";
			cin >> yas;
		}
};
class turetilmis : public temel{
	
};
int main(){
	turetilmis t;
	t.sorgu();
	system("Pause");
	return 0;
}