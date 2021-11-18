#include <iostream>
#include <cmath>
using namespace std;

int main (){
	//2x2 lik matris toplama
	int a[2][2],b[2][2], c[2][2];
	int i,j;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "A: " << i << "," << j << endl;
			cin>>a[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << "B: " << i << "," << j << endl;
			cin>>b[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		cout << c[i][j] << " ";
		}
		cout << endl;
	}	
}