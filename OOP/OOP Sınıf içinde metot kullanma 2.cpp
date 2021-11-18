#include <iostream>
#include <string.h>
using namespace std;

 class Insan {
 	public:
 		string isim;
 		string gozRengi;
 		string sacRengi;
 		
 		void goster(){
 			cout << isim << " ve kisisel ozellikler : " << endl <<"Goz rengi : " << gozRengi << "  Sac rengi : " << sacRengi << endl << endl;
		 }
 };
 int main(){
 	Insan obje1;
 	Insan obje2;
 	
 	obje1.isim = "Ela";
 	obje1.gozRengi = "Mavi";
 	obje1.sacRengi = "Kirmizi";
 	
 	obje2.isim = "Mamut" ;
 	obje2.gozRengi = "Siyah";
 	obje2.sacRengi = "Koyu Sari";
 	
 	obje1.goster();
 	obje2.goster();
 }