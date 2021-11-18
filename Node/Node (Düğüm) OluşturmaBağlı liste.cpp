#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
 
 class Node{ 			//Düğüm tanımladık 
 	public:				//Global 
 		int data;		//düğümün verisi
 		Node *next;		//Düğümün adresi	
 }*yeni,*ilk,*son,*extra;		//Dört tane düğüm tanımladık 
 
 int main(){
 	yeni=(Node*)malloc(sizeof(Node)); 		//Bu adresteki boyuta göre hafıza aç
 	cout << "Adres : " << yeni << endl;		//Örn :0x891530 (Açacağı adres temsili)
 	yeni->data = 2020; 					//Yeni düğümünün datası = 2020
 	yeni->next = NULL;						//Yeni düğümünün adresi (NULL demek son demek olsun)
 	cout << endl;
 	
 	ilk = yeni 	;							//Oluşturduğumuz yeni düğümünü ilk'e atadık.
 	
 	cout << "Ilk dugumunun datasi :" << ilk->data << endl; 		//Ekrana ilkin datasını yazdırdık
 	cout << "Ilk dugumunun adresi :" << ilk->next << endl;		//Ekrana ilkin adresini yazdırdık
 	cout << endl;
 	
 	yeni=(Node*)malloc(sizeof(Node)); 		//Yeniden hafızamızı istedik
 	ilk->next=yeni;							//NULL olan ilk in nextine yeni düğümünü bağladık
 	yeni->data=2021;
 	yeni->next=NULL;						//Yeni düğümünü yeniden doldurduk
 	son=yeni;								//Oluşturduğumuz yeni düğümünü son düğümünün içine atadık
 	
 	cout << ilk->data <<" - "<< ilk->next << endl; 	//2020 - 0xd4156 (Temsili adres)(Her bilgisayarda farklı adres açabilir)
 	cout << son->data <<" - "<< son->next << endl;		//2021 - 0
 	cout << endl;
 	
 	yeni=(Node*)malloc(sizeof(Node));		//Yeniden hafızamızı istedik
 	son->next=yeni;							//NULL olan son un nextine yeni düğümünü bağladık
 	yeni->data=2020;						
 	yeni->next=NULL;
 	extra=yeni;								//Oluşturduğumuz yeni düğümüzü de extra düğümünü içerisine atadık
 	
 	cout << ilk->data <<" - "<< ilk->next << endl;
 	cout << son->data <<" - "<< son->next << endl;		//Tüm düğümlerimizin data ve adreslerini ekrana yazdırdık
 	cout << extra->data <<" - "<< extra->next << endl;	//Yeni düğümünde işlem yapıp sonuçlarını diğer 3 düğüme aktardık

 	//Check-up Codes Başarılar Diler
 	
 }