#include <iostream>
using namespace std ;

int main (){
	//Girilen puanın (0-100) harfnotunu yazdıran algoritma
int basari ;
char harfnot;
cout << "Basari notunu giriniz : ";
cin >> basari;
if(basari>=90){
	harfnot = 'A';
}else if (basari >=80){
	harfnot = 'B';
}else if (basari >=70){
	harfnot = 'C';
}else if (basari >=60){
	harfnot = 'D';
}else if (basari >=50){
	harfnot ='F';
}else{
	cout << "0";
}
	cout << "Ders notunuz: " << harfnot <<  endl;
	return 0;

}