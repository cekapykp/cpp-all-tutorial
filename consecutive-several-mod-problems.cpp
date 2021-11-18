//Ardısık birkaç mod problemleri 
#include <iostream>
using namespace std;
int main(){
	//1. problem = 50 dahil 70 dahil değil; bu sayilar arasındaki çiftleri ekrana yazdır. Alt alta
	for(int i = 50 ; i<70 ; i++){
		if(i%2==0){
			cout << i << endl;
		}
	}
	cout << endl;
	// 2. problem = 100 dahil 70 dahil değil; bu sayilar arasında 7 ye tam bölünleri büyükten küçüğe yazdır. Alt alta
	for (int k =100 ; k>70;k--){
		if (k%7==0){
		cout << k <<endl;
		}
	}
	// 3.problem = 0 ile 100 arasındaki hem 3 hem 7 ye tam bölünen sayıları yazdır. Yan yana virüglle ayrılmış olarak.
	cout << endl;
	for (int m=1 ; m<100 ; m++){
		if(m%3==0 && m%7==0){
			cout << m << ", " ;
		}
	}
	// 4. problem = 0 ile 100 dahil 7 ya da 9 ye bölünen sayıları yazdır. Yan yana virgülle ayrılmış olarak.
	cout << endl;
	cout << endl;
	for (int j =0 ; j<=100;j++){
		if(j%7==0 || j%9==0){
			cout << j << " ," ;
		}
	}
	
	
	
	return 0;}