#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int arr[3]={81,225,4};
	// girilen sayiların karekodunu bulma
	for (int titan=0;titan<3;titan++){
		arr[titan]=sqrt(arr[titan]);
		cout << arr[titan]	<< endl;
	
	}
}