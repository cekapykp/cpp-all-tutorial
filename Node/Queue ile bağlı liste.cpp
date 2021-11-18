#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

#define size 5			//Size = boyutu 5 elemanlı global değişken
int k[size];			//k adında bir dizi - size (5 eleman) 
int front=0,rear=0;		//Ön ve arka adında değişken oluştur ve bunları 0 yap

void ekle(){
	int n;
	if(rear==size){						//Eğer arka 5 eşitse 
		cout<<"Kuyruk FULL"<<endl;		//Ekrana kuyruğun dolu olduğunu yazdır
	}else{
	cout<<"Eleman: "<<endl;				
	cin>>n;								//Arkanın dolu olmadığı durumlarda eleman eklet
	k[rear]=n;							//Dizinin en arkasına eklet
	rear++;								//Arkayı bir dolu olarak doldur
	}
}

void goster(){
	if(front==rear){					//Ön arkaya eşitse 
		cout<<"Kuyruk empty"<<endl;		//Kuruğun boş olduğunu belirt
	}else{
	for(int i=front;i<rear;i++){		//En önü ekrana yazdır ve arkaya eşit olana dek önü bir arttırıp ekrana yazdırmaya devam et
		cout<<k[i]<<"  ";
	}}
}

void cikart(){
	int temp;
	temp=k[front];							//En öndekini temp değişkeninde ata bunu çıkarcaz
	front++;								//En öndeki değeri 1 arttır böylece eski değer çıkartıldı
	cout<<"cikartildi:  "<<temp<<endl;		//Temp değişkeni çıkartıldığını ekrana yazdır
	
}

int main()
{
	int s;
	while(1){
	cout << endl;
	cout<<" 1. Ekle 2.Cikart 3.Goster 4.Cikis"<<endl;
	cin>>s;
	switch(s){
		case 1:ekle();
				break;
		case 2:cikart();
				break;
		case 3:goster();
				break;
		case 4: exit(0);
				break;
		
 			}
		}
	return 0;
	
}