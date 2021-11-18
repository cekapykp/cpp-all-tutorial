#include <iostream>
using namespace std;

int n;
int m;

int ustal (int n, int m);

int main(){
	
	cout << "Ust alma sonucu : " << ustal(5,2) << endl;
}

ustal(int n,int m){
	int sonuc = 1;
	int i;
	for (i=0;i<m;i++){
		sonuc = sonuc * n;
		
	}
	return (sonuc);
}