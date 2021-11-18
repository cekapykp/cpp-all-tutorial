#include <iostream>
#include <cmath>
using namespace std;

int main (){
	//4x4 matrix hazırlanması karekök alınması
	int dizi[4][4]={1,2,3,4,5,6,7,8,9,16,25,36,49,64,81,100};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout << "     " << sqrt(dizi[i][j]);
		}
	cout << endl;
	}
}