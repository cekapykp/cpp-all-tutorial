#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream dosya;
	dosya.open("gereksiz.txt");
		if(dosya.is_open()){
			cout << "Acildi";
		}else{
			cout <<"Acilmadi";
		}
	dosya << "Ne kadar da gereksiz bir ders";
	dosya.close();
	return 0;
}

/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream dosya;          //Varsayılan modu ios::in |ios::out
	dosya.open("gereksiz.txt");
		if(dosya.is_open()){
			cout << "Acildi";
		}else{
			cout <<"Acilmadi";
		}
	dosya << "Ne kadar da gereksiz bir ders";
	dosya.close();
	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream dosya;
	dosya.open("gereksiz.txt", ios::app); 		//Dosya yoksa fstream ile açmak için ios::out veya ios::app eklemelisin
		if(dosya.is_open()){
			cout << "Acildi";
		}else{
			cout <<"Acilmadi";
		}
	dosya << "Ne kadar da gereksiz bir ders";
	dosya.close();
	return 0;
}
*/