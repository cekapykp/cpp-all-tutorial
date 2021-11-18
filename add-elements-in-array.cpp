#include <iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int arr[5]={5,15,7,8,10};
	int toplam = 0;
	for(int i=0;i<=4;i++){
		cout << "a(" << i << ")=" << arr[i] << endl;
	}
	for(int j=0;j<=4;j++){
		toplam =toplam +arr[j];
	}
	cout << "Toplam : " << toplam << endl ;
	
		
}