#include <iostream>

using namespace std;
class kutu{
	public:
		double uzunluk;
		double genislik;
		double yukseklik;
		
};
int main(){
	kutu obje1;
	kutu obje2;
	double hacim =0;
	
	obje1.uzunluk =6.0;
	obje1.genislik = 7.0;
	obje1.yukseklik = 5.0;
	
	obje2.uzunluk = 10.0;
	obje2.genislik = 13.0;
	obje2.yukseklik = 12.0;
	
	hacim = obje1.uzunluk * obje1.genislik * obje1.yukseklik ;
	cout << "1. kutunun hacimi : " << hacim << endl;
	
	hacim = obje2.uzunluk * obje2.genislik * obje2.yukseklik ;
	cout << "2. kutunun hacimi : " << hacim  << endl;
}