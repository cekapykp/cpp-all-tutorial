#include <iostream>
using namespace std;

int main(){
	// iç içe döngüler köşegen
	int b;
	cout << "boyut girin";
	cin >> b;
	for (int i=0 ; i<b;i++){
		for (int k =0;k<b;k++){
			if(i+k==b-1){ //sadece ters köşegenler için
			cout << "1";
			}else{
				cout << "0";
			}
			}		
				cout << endl;
		}
	}