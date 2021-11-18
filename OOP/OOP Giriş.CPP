#include <iostream>
using namespace std;
 
 class student{			//Fakrika oluşturduk. (Sınıf). Şimdi bu fakrikadan istediğimiz sayıda obje üretebiliriz
 	public:
 		string name;
 };
 
 int main(){
 	student obje1;		//Farbiramızdan oluşturdğumuz bir obje
 	student obje2;		//Fabrikadan oluşturduğumuz ikinci bir obje
 	obje1.name = "Yakup Sari";
 	obje2.name = "Cekap Check";
 	
 	cout << obje1.name << "  " << obje2.name << endl;
 	
 }