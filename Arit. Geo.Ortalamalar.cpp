#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
	cout << "Ortalamalari bulduran program " << endl;
	cout << "Kac sayi giriceksiniz :";
	int n,toplam=0,carpim=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		int deger;
		cin >> deger;
		toplam+=deger;
		carpim*=deger;
	}
	cout << carpim << endl;
	cout << "Aritmetik ortalamalari : " << (float)toplam/n << endl;
	cout << "Geometrik ortalamalari : " << pow(carpim,(float)1/n)<< endl;
}