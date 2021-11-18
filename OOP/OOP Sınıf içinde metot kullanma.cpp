#include <iostream>
using namespace std;
 
 class student{			
  	public:
 		string name;
 		void isimcagir(){
 			cout << "Benim adim : " << name << endl;
		 }
 };
 
 int main(){
 	student obje1;
 	obje1.name = "Cekap";
 	obje1.isimcagir();
 	
 	student obje2;
 	obje2.name = "Kristof Kolomp";
 	obje2.isimcagir()
; }