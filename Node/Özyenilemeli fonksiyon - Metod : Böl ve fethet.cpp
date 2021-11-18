#include <iostream>
using namespace std;
/* Özyenilemeli fonksiyon - Böl ve fethet yöntemi*/
/*Recursive - Özyenilemeli ile faktöriyel hesaplatma*/
int fact(int n){
	if(n<=1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}

/*Iterative - Özyenilemesiz yöntemle famtöreiyel hesaplatma - Her özyenilemeli, özyenilemesiz olarak dönüştürebilir */
int iterfact(int n){
	int aradeger=1;
	for(int i =n;i>0;i--){
		aradeger*=i;
	}
return aradeger;
}

int main(){
	cout << fact(5)<<endl;
	cout << iterfact(4);
}