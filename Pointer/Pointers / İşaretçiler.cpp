#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int a = 10;
	int *p;		//p değişkeni artık bir işaretçi
	p=&a;		//p işaretçisi artık a değişkenini göstemekle yükümlü
	
	cout << "a  : " << a << endl;
	cout << "p  : " << p << endl;
	cout << "*p : " << *p << endl;
	cout << "&a : " << &a << endl;
	cout << "&p : " << &p << endl; //Sonuçta p de başta bir değişkendi ve biz işaretçi değişkeni yaptık. Onun da farklı bir adresi oalcak.
}