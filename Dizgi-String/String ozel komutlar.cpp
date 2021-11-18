#include <iostream>
#include <string>
using namespace std;   //.begin() ve .end()

int main(){
	string deger ("Bugun hava karlı ");
	string deger2 (deger.begin()+6,deger.end()-6);
	cout << deger2 << endl;
	
}