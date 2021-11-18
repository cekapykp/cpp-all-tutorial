#include <iostream>
using namespace std;

int main(){
	// iç içe döngüler 
	cout << "iç içe döngüler" << endl;
	for(int j=1;j<=10;j++){
		for(int i=1;i<=10;i++){
			cout << i*j << " , " ;
		}
		cout << endl;
	}
	}