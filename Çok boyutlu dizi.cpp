#include <iostream>
using namespace std;

int main (){
	int arr[2][2]={{10,9},{1,9}};
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout << arr[i][j] << " ";
		}
		cout<< endl;
	}
}