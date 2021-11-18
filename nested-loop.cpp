#include <iostream>
using namespace std;

int main(){
	// iç içe döngüler 
	cout << "iç içe döngüler" << endl;
	for(int j=0;j<10;j++){
		for(int i=0;i<10;i++){
			cout << i << " " << j << " , ";
		}
		cout << endl;
	}
	}