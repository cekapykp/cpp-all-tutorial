#include <iostream>
#include <cmath>
using namespace std;

class kure{
	public:
		int yaricap;
		double pi = 3.14;
		
		double alan(){
			return 4*pi*pow(yaricap,2);
	}
		double hacim(){
			return (pi*pow(yaricap,3)*4)/3;
		}
};

int main(){
	kure obje1;
	cout << "yaricap :" ;
	cin >>obje1.yaricap;
	cout << "Kurenin alani : " << obje1.alan() << endl;
	cout << "Kurenin hacimi : " << obje1.hacim() << endl;
}