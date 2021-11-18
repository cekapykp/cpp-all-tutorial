#include <iostream>
#include <cmath>
using namespace std;

int main (){
	// diziddeki elenamların en büyük olanı ve en küçük olanı buldur. Hepsini topla
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
	int eb=a[0]; // en büyüğü buldurma
	for (int k=0;k<n;k++){
		if(a[k]>eb){
			eb=a[k];
		}
	}cout << "En buyuk : " << eb << endl;
	
	int ek=a[0];
	for(int m=0;m<n;m++){
		if(ek>a[m]){
			ek=a[m];
		}
	}cout << "En kucuk : " << ek << endl;
	cout << "sayilarin toplami : " << toplama <<endl;
	cout << "sayiların ortaalamasi : " << (float)toplama/n;

}