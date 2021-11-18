#include <iostream>
using namespace std;

int main (){
	int a[5][2]={{1,2},{2,3},{3,4},{4,5},{5,6}};
	cout << "Dizi elemanlari : " << endl;
	for(int i=0;i<5;i++){
		for(int j =0;j<2;j++){
			cout <<"[" << i <<"][" << j << "]:";
			cout <<a[i][j]<<endl;
		}
	}
}