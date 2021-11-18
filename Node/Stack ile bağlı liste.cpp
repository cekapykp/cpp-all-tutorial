#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Node{			//Düğüm tanımladık
	public:			//Düğümlerimizin global olacağını söyledik
	int data;		//Düğümlerimizin data değerlerine sahip olacağını belirttik
	Node *next;		//Düğümlerimizin adreslerini tanımladık
};
Node *yeni=NULL;
Node *top=NULL;
Node *temp=NULL;	//Üç farklı düğümü NULL olacak şekilde tanımladık

void push(int x){		//Eleman ekleme komutu
	yeni=new(Node);		//yeni düğümünüze bir düğüm yapısı oluşturuduk
	yeni->data=x;		//data sına x yazdırdık
	yeni->next=top;		//adresini ise top düğümüne atadık
	top=yeni;			//en sonunda yeni düğümümüzü de top düğümüne atadık.Böylece eklediğimiz eleman en üstte eklenmiş oldu
}

void display(){						//Gösterme fonksiyonu
	temp=new(Node);					//temp düğümüne bir node oluşturduk
	temp=top;						//en üstteki düğümümüz top u temp düğümüne atadık
	if(temp==NULL){	
		cout<<"Display Yigin bos";	//Eğer temp düğümümüz boş ise ekrana yığının boş olduğunu yazdıracak
	}else{
	
	while(temp!=NULL){
		cout<<temp->data<<endl;		//temp düğümümüzün boş olmadığı halde döngü halinde altta kalan elemanların adreslerinden değerlerini yazdıracak
		temp=temp->next;
	}
	}
}												
void pop(){											//çıkarma fonksiyonu
	if(top==NULL){		
		cout<<"Yigin Bos"<<endl;					//En üstte eleman yoksa yığın boş yazdıracak
	}
	else{
	cout<<"En usteki eleman: "<<top->data<<endl;	//En üstteki eleman dolu ise data sını yazdırıp  
	top=top->next;									//NULL olan top->next değerini top düğümüne atayarak bir nevi çıkarmış bulunuyoruz
	}	
}

int main(){
	int s;
	int n;
	while(1){
	cout<<"1. Push    2.Pop   3.Goster   4.Cikis"<<endl;
	cin>>s;
	switch(s){
		
		case 1:	cout<<"Eleman: "<<endl;
				cin>>n;
				push(n);
				break;
		case 2: pop();
				cout << endl;
				break;
		case 3: display();
				cout << endl;
				break;
		case 4: exit(0);
				break;	
			}
		}
	return 0;
}