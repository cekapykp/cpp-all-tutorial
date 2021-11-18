#include <iostream>
#include <string>
using namespace std;

int main(){
	string s0 ("Ilk string atamasi");
	string s1;
	string s2 (s0);
	string s3 (s0,7,3);
	string s4 ("Ilk altı karakteri al",6);
	string s5 ("Baska bir string atayalim");
	string s6 (10,'x');			// 10 tane x yazdırdırıcak
	string s7 (10,42);			// 10 tane asci kodu 42 olan * yazdırıcak
	string s8 (s0.begin(),s0.begin()+7);
	
	cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl << s5 << endl << s6 << endl << s7 << endl << s8;
	
	
	
}   