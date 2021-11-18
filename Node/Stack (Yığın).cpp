#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

void gosterYigin(stack <int> x){  		//stack boş bir yığın tanımlar - int x parametreli boş bir yığın 
	while(!x.empty()){					//eğer yığın boş değilse yapılacak döngü
		cout<<" \t "<<x.top();			//yığından çıkarmadan en üstteki değeri döndüren işlem
		x.pop();						//yığından en üstteki elemanı çıkarır
	}		
}
int main(){
		stack <int> s;							//yığınımızı tanılıyoruz ve s ismini atıyoruz
	int n;										
	cout<<" Yiginin kac elemani olacak:"<<endl;	
	cin>>n;
	for (int i=1;i<=n;i++){		
		int m;
		cout<<"Deger giriniz:"<<endl;
		cin>>m;
		s.push(m);								//yığına istenildiği sayıda elemanı s.push ediyoruz.Başa eklenir, baştan çıkarılır.
	}
	
	s.push(100);
	s.push(105);
	s.push(123);								//ekxtradan yığınımza otomatik değerler de ekletiyoruz
	gosterYigin(s);								//yığınımızı görüntületmek için fonksiyonumuzu çağırıyoruz
	cout<<"Yiginin boyutu:  "<<s.size()<<endl;  //yığınımızın boyutunu .size komutuyla öğreniyoruz
	s.pop();									//.pop komutu yığına en son eklenen nesneyi çıkarır
	cout<<"---------------"<<endl;
	gosterYigin(s);
	cout<<"Yiginin boyutu:  "<<s.size()<<endl;	//Elaman çıkartığımız nesnenin boyutunu yeniden ekrana yazdırıp işlemi bitiriyoruz

	return 0;	
}