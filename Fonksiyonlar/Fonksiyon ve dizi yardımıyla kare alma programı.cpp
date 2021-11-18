#include <iostream>
using namespace std;

int kareal(int x);

int main(){
	cout<< "Fonskiyon ile kare alma program, "<< endl;
	for(int i=1;i<10;i++){
		cout <<kareal(i);
		cout << endl;
	}
} 
int kareal (int x){
	return x*x;
}