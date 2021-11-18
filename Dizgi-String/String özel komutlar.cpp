#include <iostream>
#include <string>
using namespace std;   //.begin() ve .end()

int main(){
	string deger ("Bugun hava karlı ");
	string deger2 (deger.begin()+6,deger.end()-6);
	cout << deger2 << endl;
	
}
/*
#include <iostream>
#include <string>
using namespace std;     // .rbegin() ve .rend()

int main(){
	string duzu ("Hello world ");
	string ::reverse_iterator tersi;
	string str1;
	
	for(tersi=duzu.rbegin();tersi<duzu.rend();tersi++){
		str1=*tersi;
		cout << str1;		//veya  cout << *tersi
	}
	cout << endl;
	return 0;
	
}
#include <iostream>
#include <string>

using namespace std;    // .lenght() .capacity() .max_size()

int main(){
	string degisken ("Bu ilk atamadir ve karakter sayisi 42 dir.");
	degisken ="Bu da sonradan atanan deger";
    cout << "lenght : " << degisken.length() << endl;
    cout << "capacity : " << degisken.capacity() << endl;
    cout << "max_size : " << degisken.max_size() << endl;
    return 0;
}
/*