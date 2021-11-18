#include <iostream>
#include <cmath>
using namespace std;

class denklem{
	public:
		int a,b,c,x1,x2,delta;
		denklem(){
			a=b=c=x1=x2=delta=0;
		}
		void hesapla(double a,double b,double c){
			delta = b*b-4*a*c;
			if(delta<0){
				cout << "kok yok";
			}else if(delta ==0){
				x1=-b/2*a;
				cout << "Ortak kok var : " << x1 ;
			}else{
				x1=-b-sqrt(delta)/2*a;
				x2=-b+sqrt(delta)/2*a;
				cout << "x1=" << x1 << "  x2=" << x2;
			}
		}
};
int main (){
	denklem obje1;
	cout << "a:" ;
	cin >> obje1.a;
	cout << "b:";
	cin >> obje1.b;
	cout << "c:";
	cin >> obje1.c;
	obje1.hesapla(obje1.a,obje1.b,obje1.c);
	return 0;
}