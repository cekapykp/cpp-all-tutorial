#include <iostream>
#include <cmath>
using namespace std;

int main (){
	cout << "Dizilerin gosterici ile kullanılması örneği " << endl;
	int z[3]={1,4,80};
	int *p;
	p=z; 		//yada bu ifadeyi p=&z[0];
	cout << z[2] <<endl;
	cout << p[2] << endl;
	
	p[1]={6};
	cout << z[1]<< endl;
}