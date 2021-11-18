#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main(){
	int dizi [5];
	int *fakedizi = NULL;
	fakedizi=dizi;			//veya fakedizi=&dizi[0];
	dizi[4]=2;  			//(fakedizi+4)=2;         
							
	cout << fakedizi[4] ;
	
	
}