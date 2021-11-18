#include <iostream>
using namespace std;

int main(){
	int a[8]={32,15,21,14,8,2,17,90};
	int toplam =0;
	int teksayilar=0;
	for(int i =0;i<8;i++){
		if(a[i]%2==1){
			toplam+=a[i];
			teksayilar++;
		}
	}
	cout <<"tek sayi ortalamari : " << (float)toplam/teksayilar << endl;
}