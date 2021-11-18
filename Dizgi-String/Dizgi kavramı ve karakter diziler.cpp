#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
	cout << "Dizgi kavrami ve karakter dizileri"<< endl;
	
	char *b="yazilim";      
	cout << b << endl;
	cout << b[2] << endl;
	
	char a[8]="yazilim";
	cout << a << endl;
	
	char x[5];
	x[0]='y';
	//Eğer "y" yazsaydık iki karakter gibi düşünülecekti : y ve /0 (/0 karakteri end of string karakteridir)
	x[1]='a';
	x[2]='z';
	cout << x << endl;
}