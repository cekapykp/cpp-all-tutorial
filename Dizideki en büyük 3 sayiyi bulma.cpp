#include <iostream>
using namespace std;

int main (){
	//dizideki en büyük üç elemanı ekrana yazdıran program
	int a[7]={4,-8,9,10,22,4,15};
	int eb1=a[0];
	int eb2=a[0];
	int eb3=a[0];
	for(int i=0;i<7;i++){
		if(a[i]>eb1){
			eb3=eb2;
			eb2=eb1;
			eb1=a[i];
		}else if(a[i]>eb2){
			eb3=eb2;
			eb2=a[i];
		}else if(a[i]>eb1){
			eb3=a[i];
		}
	}
	cout << "En buyuk sayilar : " << eb1 << ", " << eb2 << ", " << eb3 << endl;
	cout << "En buyuk sayilarin toplami : " << eb1+ eb2+eb3 << endl; 
}