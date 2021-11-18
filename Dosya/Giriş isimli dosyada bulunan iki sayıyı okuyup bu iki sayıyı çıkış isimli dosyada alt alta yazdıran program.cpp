#include <iostream>   //hazır bir dosyayı okuma
#include <fstream>
using namespace std;

int main(){
int sayi1,sayi2;
ifstream giris;
ofstream cikis;
giris.open("giris.txt");
giris>>sayi1>>sayi2;
cikis.open("cikis.txt");
cikis<<sayi1<<"\n"<<sayi2;
cout << sayi2;
giris.close();
cikis.close();
}
/*
#include <iostream>    //hazır olmayan bir dosyayı hazırlayıp okutma
#include <fstream>
using namespace std;

int main(){
ofstream yazma;
yazma.open("giris.txt");
yazma << "5 8 5 4 1 8 6 2 6 8 1 3 8 1 3 8 7 5 1 3";
yazma.close();

ifstream okuma;
int sayi;
int dizi[2];
okuma.open("giris.txt");
for(int i=0;i<2;i++){
	okuma>>sayi;
	dizi[i]=sayi;
}

ofstream sonuc;
sonuc.open("sonuc.txt");
sonuc << dizi[0] << endl;
sonuc << dizi[1] << endl;
sonuc.close();
}
*/