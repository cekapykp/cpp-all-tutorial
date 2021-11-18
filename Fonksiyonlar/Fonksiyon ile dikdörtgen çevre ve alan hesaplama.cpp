#include <iostream>
#include <cmath>
 using namespace std;
 int alan (int kisa,int uzun){
 		return kisa*uzun;
 }
 int cevre (int kisa,int uzun){
 		return (kisa+uzun)*2;
 }
 int main(){
 	int kk,uk;
 	cout << "Kisa kenar : " ;
 	cin >>kk;
 	cout << "Uzun kenar : " ;
 	cin >> uk;
 	cout << "Alan : " << alan(kk,uk)<<endl;
 	cout << "Çevre : " << cevre(kk,uk)<<endl;
 }