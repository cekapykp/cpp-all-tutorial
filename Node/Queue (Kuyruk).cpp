#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include<queue>			//Kuyruk yapısı tanımlar.FIFO kuralı vardır. İlk giren ilk çıkar

using namespace std;

void goster(queue <int> x){				//Kuyruk fonksiyonu tanımlandı. Tutacağı değerler int ve x değişkenli
	while(!x.empty()){					//Kuyruk boş olana dek bunları yap
		cout<<"  "<<	x.front();		//Ekrana ilk değeri yazdır
		x.pop();						 //Değeri çıkart
	}	
	cout<<"\n";
}

int main(){
	queue <int> kuyruk;
	kuyruk.push(2020);
	kuyruk.push(2021);
	kuyruk.push(2022);
	goster(kuyruk);
	kuyruk.pop();
	goster(kuyruk);
	kuyruk.push(2023);
	goster(kuyruk);
	kuyruk.pop();
	goster(kuyruk);
	return 0;
}