#include <iostream>
#include <cmath>
 using namespace std;
 int carpim (int t,int u){
 	int sonuc =1;
 	for(int i = 0;i<u;i++){
 		sonuc*=t;
	 }
	 return sonuc;
 }
 int main(){
 	for (int i=1;i<=10;i++){
 		cout << carpim(3,i)<<endl;
	 }
 }