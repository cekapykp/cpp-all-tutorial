#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
 
class Node{ 		//Düğüm oluşturduk
	public:			//Düğümün global tanımladık
	int data;		//Düğümün tutacağı ilk deger (int olarak)
	string ad;		//Düğümün tutacağı ikinci değer (string olarak)
	Node* next;		//Düğümün adresi (değerini next değişkeni tutuyor)
}*start; 			//Bir düğümümüz var adı da start


void add(int x,string z){ 				//Ekleme fonksiyonu - Eklenecek parametreler x ve z
	if(start==NULL){					//Eğer daha hiç düğümümüz yoksa 
	start=new(Node);						//start adında bir düğüm oluştur
	start->data=x;							//data sına x değerini yerleştir
	start->ad=z;							//ad kısmına z değerini yerleştir
	start->next=NULL;						//adresini boş yap
	}
	else{								//Düğümümüzün en az bir tane olduğu durumlarda
		Node* current=start;				//current adında düğüm oluştur ve start düğümünü current içerisine ata
		while(current->next!=NULL){			//current düğümümüzün adresi boş olduğu sürede düğümümüzü 'current->next' olarak güncelle 
			current=current->next;
		}	
		current->next=new(Node);			//current nextine yeni bir düğüm yapısı oluştur
		current->next->data=x;				//current nextinin datasına x eklet
		current->next->ad=z;				//current nextinin ad kısmına z eklet
		current->next->next=NULL;			//current nextinin adresine(nextine) NULL değerini gönder
	}
}

void print(Node* n){									//Düğümünün tamamını gösterecek fonksiyon (n temsili düğüm-start düğümü atacak) 
	while(n!=NULL){										//Düğümümüz boş olana dek
		cout<<"Ogrenci Numarasi:   "<<n->data<<endl;		//n(start)->data sını yazıdır
		cout<<"Ad Soyad:     "<<n->ad<<endl;				//n(start)->ad kısmını yazdır
		cout<<"Adres:  "<<n->next<<endl;					//n(start)->next kısmını yazdır
		n=n->next;											//n düğümümüzü n->next düğümü olarak ata(Çünkü yukarda böyle ekledik böyle aranacak)
	}
}

void Sil(int x){								//Silme fonksiyonu - Bağlı listenini silinecek olan düğümün datası temsili = x
	Node* current=start;						//current adında bir düğüm oluştur ve start düğümünü current düğümüne ata
	Node* prev=NULL;							//prev adında bir düğüm oluştur ve içerisini boş bırak
	while(current && current->data!=x){			//current düğümünün ve hatta datasının silinecek dataya eşit olmayana dek
		prev=current;							//current düğümünü prev düğümüne ata
		current=current->next;					//current next düğümünü current düğümüne ata
	}
	if(current){								//current varsa
		if(prev){								//prev varsa
		prev->next=current->next;				//current next tini prev nextine ata 
		delete current;							//current ten kurtul
		}
		else{									//current olmadığı, olduğu ve prev olmadığı durumlarda
			start=current->next;				//current nextini start a ata
			delete current;						//currnet i sil
		}
	}	
}

void arama(int x){							//Arama fonksiyonu - Arancaka olan düğümün sırası temsili = x
	Node* current=start;					//current adında bir fonksiyon oluştur
	while(current && current->data !=x){	//current ve hatta current data sı aranacak olan düğümün datası olmadığında döngü
		current=current->next;				//current next ini current e ata
	}
	if(current!=NULL){						//Eğer current boş değil ise 
		current=current->next;				//current in nextine current i ata
	cout<<"Bulundu";						//Ekrana bulundu yazdır
	}else{									//Current boş olduğu zaman 
		cout<<"Bulunamadi";					//Ekrana bulunmadı yazdır
	}
}

int main(){
	int menu;
	string h;
	while(1){
	cout<<"\n Menu  : 1. Ekleme     2. Arama    3. Sil   4. Gorunutle  5.Cikis"<<endl;
	cin>>menu;
	switch(menu){												//Menu değişkenli switch yapısı oluştur		
		case 1:int n;											//Menu = 1 olduğunda ekleme fonksiyonunu çalıştır
				cout<<"Bagli listenin kac elemani olacaktir:";
				cin>>n;											//Düğüm sayısını öğren
				for(int i=1;i<=n;i++)							//Döngü ile istenilen düğüm sayısınca değer oluştur
				{
					int m;
					cout<<i<<". Ogrenci numarasi:";
					cin>>m;
					cout<<i<<". Ad Soyad:        ";
					cin>>h;
					add(m,h);									//add fonksiyonunda çalışacak değerlere dönüştür
				}
				break;
				
		case 2: n=0;											//Arama fonksiyonu için menu =2
			 	cout<<"Aramak istediginiz eleman:"<<endl;
			 	cin>>n;
			 	arama(n);										//n burada aramak istediğimiz düğümün datasını temsil etmekte
			 	break;
			 	
		case 3:cout<<"Bagli listenin silmek istediginiz eleman:"; //silme için menu = 3
				cin>>n;
				Sil(n);											//n burada silmek istediğimiz düğümün datasını temsil etmekte
				break;
				
		case 4: print(start);									//Ekrana düğümü yazdırmak için menu =4
				break;
				
		case 5:exit(0);
	}
}
	return 0;
}