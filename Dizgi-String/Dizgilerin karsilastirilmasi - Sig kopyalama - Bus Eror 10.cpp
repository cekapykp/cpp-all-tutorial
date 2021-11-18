#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
	cout << "Dizgilerin karsilastirilmasi - Sig kopyalama - Bus Eror 10"<< endl;
	
	char *b="yazilim";
	cout << b << endl;
	
	char a[8]="yazilim";
	cout << a << endl;
	if(b==a){
	cout << "Esittir ! " << endl;
}else{
		cout << "Esit degildir ! " << endl; //İçerik aynı olsa da iki farklı adres var !
}			
}