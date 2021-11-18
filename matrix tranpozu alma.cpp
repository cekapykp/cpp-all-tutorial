#include <iostream>
using namespace std;
int j, dizi[2][3];
int main(){
	cout << "matsiz transpozunu alma "<< endl;
	int a[3][3]={5,4,3,4,0,4,7,10,3};
	for (int i =0;i<3;i++){
		for(int j=0;j<3;j++){
			cout <<"\t" << a[i][j];
		}
	cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "\t" << a[j][i];
		}
	cout << endl;
	}
	return 0;
}