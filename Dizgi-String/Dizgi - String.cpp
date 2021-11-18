#include <iostream>
#include <string>
using namespace std;

int main(){
	string str1,str2,str5;		//Bos stringler tanımlandı
	string str3="Merhaba Dunya";	//Yazılı stringler 
	string str4("ayin");			//Bir yazılı string oluştruma şekli daha
	str5="gunu bugun";			//Deger atanmış string
	str1=str3+" "+str4+" ";			//Birleştirilmiş stringler
	str1+="9.";					//Stringle yapıştırma
	cout << str1+str5+"!"<< endl;
}