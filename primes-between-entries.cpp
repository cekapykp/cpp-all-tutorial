#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
	// Kullanıcının girdiği 2 sayı arasındaki asal sayıları bulacağız.
	int sayi1,sayi2,sayac;
	cout<<"1. Sayı : "; 
	cin>>sayi1;
	if(sayi1==1)//1 asal sayı değildir.!!!
	{
		sayi1++;
	}
	cout<<"2. Sayı : ";
	cin>>sayi2;
	
	for(int i=sayi1;i<=sayi2;i++)
	{
		sayac=0;//Sayacı her yeni sayı için sıfırlamamız gerekiyor.
		for(int j=2;j<i;j++)//sayıyı bölme işlemine 2 den başlıyacağız ve sayıyı kendisine bölmeyeceğiz.
		{
			if(i%j==0)
			{
				sayac++;
				break; //Eğer sayı tam bölündüyse diğer sayılara bölmeye gerek yok.
				//Döngüden çıkıyoruz.
			}
		}
		if(sayac==0)//Sayac 0 olması hiç bir böleni olmaması anlamına geliyor
		{
			cout<<i<<" ";// Yazdırıyoruz.
		}
	}
}