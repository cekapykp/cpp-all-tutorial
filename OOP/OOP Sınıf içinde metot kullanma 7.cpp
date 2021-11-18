#include <iostream>
using namespace std;

class daire {
	public:
		double r;
		double alan(double r){
			return 3.14*r*r;
		}
};
int main(){
	daire d[5];
	int i =0;
	
	for(i=0;i<5;i++){		//Her nesneye r verisi atama
		d[i].r=i;
	}
	for(i=0;i<5;i++){
		cout << "d[" << i << "] alani : " << d[i].alan(d[i].r) << endl;
	}
	return 0;
	
}