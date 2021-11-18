#include <iostream>
using namespace std;

int main(){
	cout << "Kaçsayi gireceğini yaz :" << endl;
	int n;
	cin >> n ;
	int a[n];
	cout << "sayilari gir : " << endl;
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	int toplama =0;
	for(int i=0;i<n;i++){
		toplama +=a[i];
	}
	cout << "sayilarin toplami : " << toplama <<endl;
	cout << "sayiların ortaalamasi : " << (float)toplama/n;
}